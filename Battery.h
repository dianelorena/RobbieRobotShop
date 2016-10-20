//
// Created by Diane Lorena on 10/9/16.
//
#include <iostream>
#include "RobotPart.h"

#ifndef HOMEWORKFIVE_BATTERY_H
#define HOMEWORKFIVE_BATTERY_H

using namespace std;

class Battery: public RobotPart
{
private:
    int energyBatteryContains;
public:
    Battery();
    void setEnergyContained(int);
    int getEnergyContained();
    static Battery batteryGenerator();
};

#endif //HOMEWORKFIVE_BATTERY_H
