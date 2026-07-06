#ifndef __DRONE_LIST_HPP__
#define __DRONE_LIST_HPP__

#include <iostream>
#include <memory>

/* Feels very hacky n
 need to find an alternative */

namespace vitro {

class Drone {
   public:
    enum SDK { DJI_SDK4, DJI_SDK5 };
    enum Drones {
        DJI_MINI2,
        DJI_MINI3_PRO,
        DJI_MINI3,
        DJI_MAVIC3_ENTERPRISE,
        DJI_M30,
        DJI_M300_RTK,
        DJI_MATRICE_350_RTK
    };

    Drone(){};
    Drone(Drones drone_make) : make_(drone_make){};
    Drone(std::string make) { set_make(make); };
    constexpr operator Drones() const { return make_; };

    SDK getSDK() {
        if (int(make_) < 1) {
            return SDK::DJI_SDK4;
        } else if (int(make_) >= 1 && int(make_) < 7) {
            return SDK::DJI_SDK5;
        }
    };

    std::string to_string() { return drone_lut_[make_]; };
    void set_make(std::string make) {
        for (unsigned int i = 0; i < drone_lut_.size(); i++) {
            if (make.compare(drone_lut_[i]) == 0) {
                make_ = Drones(i);
                break;
            }
        }
    };

   private:
    Drones make_;
    std::vector<std::string> drone_lut_ = {"DJI_MINI2", "DJI_MINI3_PRO", "DJI_MINI3",          "DJI_MAVIC3_ENTERPRISE",
                                           "DJI_M30",   "DJI_M300_RTK",  "DJI_MATRICE_350_RTK"};
};

}  // namespace vitro

#endif  // __DRONE_LIST_HPP__(Drones d