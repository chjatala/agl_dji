#!/usr/bin/env python3
"""Rebuild buildable source packages for the VITRO ROS 2 interface packages.

The VITRO images we were given are x86_64, and the message packages in them ship
as compiled typesupport `.so` libraries - useless on the Pi's arm64. What they do
still carry, under `share/<pkg>/`, is the original `.msg`/`.srv`/`.action`
definitions plus `package.xml`. That is everything `rosidl` needs, so the
packages can simply be regenerated for arm64.

This reconstructs, for each package, a normal ament_cmake interface package:

    msgs_src/<pkg>/
        package.xml       (regenerated - see below)
        CMakeLists.txt    (authored - install trees carry none)
        msg/ srv/ action/ (copied definitions)

Two things need care:

* `share/<pkg>/srv/` holds both `Foo.srv` and the generator's *derived*
  `Foo_Request.msg` / `Foo_Response.msg`. Only the `.srv` may be passed to
  `rosidl_generate_interfaces`; feeding the derived files too redefines the same
  types and the build fails on duplicate symbols.
* Several `package.xml` files under-declare their dependencies (`fm_gen_msgs`
  lists only `std_msgs` but its messages use `std_msgs/Header`, and none of them
  declare `rosidl_default_generators` as a buildtool dep because the install-tree
  copy is the *runtime* manifest). So dependencies are derived from the field
  types actually referenced, unioned with whatever the manifest declares.

Idempotent - safe to re-run; it replaces the output tree.
"""

import re
import shutil
import sys
import xml.etree.ElementTree as ET
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
SRC = REPO / "extracted_gnc" / "install"
OUT = REPO / "msgs_src"

PACKAGES = [
    "drone_msgs",
    "uwb_msgs",
    "wifi_msgs",
    "fm_gen_msgs",
    "vision_msgs",
    "ds4_driver_msgs",
    "vitro_ros_definitions",
    "btcpp_ros2_interfaces",
]

# Which extensions are the real inputs for each interface directory. Anything
# else in there (.idl, derived _Request.msg/_Response.msg) is generator output.
INPUT_EXT = {"msg": ".msg", "srv": ".srv", "action": ".action"}

# A field line such as `std_msgs/Header header` or `geometry_msgs/Point[] pts`.
FIELD_TYPE = re.compile(r"^\s*([a-z][a-z0-9_]*)/([A-Za-z][A-Za-z0-9_]*)")

# Not real message packages - never emit these as <depend>.
NOT_A_DEPEND = {"rosidl_default_runtime", "rosidl_default_generators"}


def interface_files(pkg_share: Path, kind: str):
    """Definition files of one kind, excluding generator-derived siblings."""
    d = pkg_share / kind
    if not d.is_dir():
        return []
    files = sorted(f for f in d.iterdir() if f.suffix == INPUT_EXT[kind])
    if kind == "srv":
        # Drop Foo_Request.msg / Foo_Response.msg - they are outputs, not inputs.
        # (They have a .msg suffix so they are already excluded above, but be
        # explicit in case a future package ships them as .srv.)
        files = [f for f in files if not re.search(r"_(Request|Response)$", f.stem)]
    return files


def referenced_packages(files):
    """External packages named by the field types inside these definitions."""
    found = set()
    for f in files:
        for line in f.read_text(encoding="utf-8", errors="replace").splitlines():
            line = line.split("#", 1)[0]  # strip comments
            if not line.strip() or line.strip() == "---":
                continue
            m = FIELD_TYPE.match(line)
            if m:
                found.add(m.group(1))
    return found


def declared_dependencies(manifest: Path):
    root = ET.parse(manifest).getroot()
    deps = set()
    for tag in ("depend", "build_depend", "exec_depend"):
        for el in root.findall(tag):
            if el.text:
                deps.add(el.text.strip())
    return deps


def manifest_identity(manifest: Path):
    root = ET.parse(manifest).getroot()

    def text(tag, default):
        el = root.find(tag)
        return el.text.strip() if el is not None and el.text else default

    maint = root.find("maintainer")
    return {
        "name": text("name", manifest.parent.name),
        "version": text("version", "0.0.0"),
        "description": text("description", ""),
        "maintainer": (maint.text or "").strip() if maint is not None else "",
        "maintainer_email": (maint.get("email") if maint is not None else "") or "",
        "license": text("license", "TODO"),
    }


def render_package_xml(ident, deps):
    dep_lines = "\n".join(f"  <depend>{d}</depend>" for d in sorted(deps))
    return f"""<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>{ident['name']}</name>
  <version>{ident['version']}</version>
  <description>{ident['description']}</description>
  <maintainer email="{ident['maintainer_email']}">{ident['maintainer']}</maintainer>
  <license>{ident['license']}</license>

  <buildtool_depend>ament_cmake</buildtool_depend>
  <buildtool_depend>rosidl_default_generators</buildtool_depend>

{dep_lines}

  <exec_depend>rosidl_default_runtime</exec_depend>
  <member_of_group>rosidl_interface_packages</member_of_group>

  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>
"""


def render_cmakelists(pkg, rel_files, deps):
    files_block = "\n".join(f'  "{p}"' for p in rel_files)
    dep_block = "\n".join(f"  {d}" for d in sorted(deps))
    find_pkgs = "\n".join(f"find_package({d} REQUIRED)" for d in sorted(deps))
    return f"""cmake_minimum_required(VERSION 3.8)
project({pkg})

# Regenerated from the interface definitions shipped in the VITRO install tree.
# See tools/reconstruct_msgs.py - do not hand-edit, re-run that instead.

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
{find_pkgs}

rosidl_generate_interfaces(${{PROJECT_NAME}}
{files_block}
  DEPENDENCIES
{dep_block}
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
"""


def reconstruct(pkg):
    share = SRC / pkg / "share" / pkg
    manifest = share / "package.xml"
    if not manifest.is_file():
        return f"SKIP {pkg}: no package.xml at {manifest}"

    dest = OUT / pkg
    if dest.exists():
        shutil.rmtree(dest)
    dest.mkdir(parents=True)

    rel_files, all_files = [], []
    for kind in ("msg", "srv", "action"):
        files = interface_files(share, kind)
        if not files:
            continue
        (dest / kind).mkdir()
        for f in files:
            shutil.copy2(f, dest / kind / f.name)
            rel_files.append(f"{kind}/{f.name}")
        all_files.extend(files)

    if not rel_files:
        shutil.rmtree(dest)
        return f"SKIP {pkg}: no interface definitions found"

    # Union of what the definitions actually reference and what the manifest
    # declares, minus the package itself and the rosidl scaffolding.
    deps = referenced_packages(all_files) | declared_dependencies(manifest)
    deps -= NOT_A_DEPEND | {pkg}
    # .action files are built on action_msgs; rosidl needs it declared explicitly.
    if any(f.suffix == ".action" for f in all_files):
        deps.add("action_msgs")

    ident = manifest_identity(manifest)
    (dest / "package.xml").write_text(render_package_xml(ident, deps), encoding="utf-8")
    (dest / "CMakeLists.txt").write_text(
        render_cmakelists(pkg, rel_files, deps), encoding="utf-8"
    )
    return f"OK   {pkg}: {len(rel_files)} interfaces, deps: {', '.join(sorted(deps)) or '(none)'}"


def main():
    if not SRC.is_dir():
        sys.exit(f"install tree not found: {SRC}")
    OUT.mkdir(exist_ok=True)
    for pkg in PACKAGES:
        print(reconstruct(pkg))


if __name__ == "__main__":
    main()
