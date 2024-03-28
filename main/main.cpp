#include <iostream>
#include "header.h"
#include "vehicle.h"
#include "ground_vehicle.h"
#include "cammel.h"
#include "cammel_speedboat.h"
#include "centaur.h"
#include "walking_boots.h"
#include "eagle.h"
#include "flying_carpet.h"
#include "broom.h"

int main()
{
    // int type;
    // int distance;
    // std::cout << "Welcome in our race simulator!\n" << "1. Race for ground vehilces. \n" << "2. Race for air vehicles.\n" << "3. Race for both air and ground vehicles.\n" << "Choose the type of a race: ";
    // std::cin >> type;
    // std::cout << "Type a distance of the road for reca(must be positive): ";
    // std::cin >> distance;

    vehicle vehicle;
    GroundVehicle GroundVehicle;
    cammel cammel;
    cammel_speedboat cammel_speedboat;
    centaur centaur;
    walking_boots walking_boots;
    eagle eagle;
    flying_carpet flying_carpet;
    broom broom;


    double distance =4500;
    std::cout << "CAMMEL " << cammel.calculateTime(distance) << std::endl;
    std::cout << "CAMMEL SPEEDBOAT " << cammel_speedboat.calculateTime(distance) << std::endl;
    std::cout << "CENTAUR " << centaur.calculateTime(distance) << std::endl;
    std::cout << "WALKING BOOTS " << walking_boots.calculateTime(distance) << std::endl;
    std::cout << "EAGLE " <<eagle.calculateTime(distance) << std::endl;
    std::cout << "FLYING CARPET " <<flying_carpet.calculateTime(distance) << std::endl;
    std::cout << "BROOM " <<broom.calculateTime(distance) << std::endl;



    return 0;
}
