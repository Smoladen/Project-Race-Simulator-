#ifndef RACE_H
#define RACE_H

#include "vehicle.h"

class Race {
public:
    virtual void registerVehicle(vehicle* vehicle) = 0;
    virtual void startRace(double distance) = 0;
    // Другие общие методы и свойства
};

class GroundRace : public Race {
    // Логика для наземных гонок
};

class AirRace : public Race {
    // Логика для воздушных гонок
};

class CombinedRace : public Race {
    // Логика для комбинированных гонок
};

#endif
