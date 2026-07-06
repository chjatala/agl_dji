# Diagnostics Message
# This message type encapsulates various diagnostic information related to
# # channel impulse response, signal strength, and frequency points.


# # Channel Impulse Response (CIR) Attributes
uint32 cir_power           # CIR power (e.g., in dBm)
float32[] cir_magnitude    # CIR magnitude signal
float32[] cir_phase        # CIR phase signal
int16[] cir_imag           # CIR imaginary signal
int16[] cir_real           # CIR real signal

# # Wireless Channel Signal Attributes
uint32 preamble_count      # Size of the preamble message
float32 fppl               # First peak power level (e.g., in dB)
float32 rssi               # Received Signal Strength Intensity (RSSI, e.g., in dBm)
float32 index_fp           # Index of the first peak in the CIR (e.g., in samples)
uint32 msgdelay_ms         # delay of message in ms   
