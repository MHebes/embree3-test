#include "somelib.h"

#include "embree3/rtcore_device.h"

RTCDevice MakeDevice(const char *config) { return rtcNewDevice(config); }