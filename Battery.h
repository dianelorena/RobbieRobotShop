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
    int killoWattHour;
public:
    Battery();
    void setkilloWattHour(int);
    int getkilloWatHour();
};

#endif //HOMEWORKFIVE_BATTERY_H
