#ifndef VEHICLE_H
#include "vehicle.h"
#endif
#ifndef GROUND_VEHICLE_H
#define GROUND_VEHICLE_H
class GroundVehicle : public vehicle{
protected:
    double timeBeforeRest;
    double restDurationFirst;
    double restDurationOthers;
public:
    GroundVehicle() = default;
    GroundVehicle(double distance) : vehicle(distance){}
    virtual double calculateTime(double distance);
};
#endif
