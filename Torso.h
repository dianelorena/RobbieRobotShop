//
// Created by Diane Lorena on 10/9/16.
//
#include <iostream>
#include "RobotPart.h"
#ifndef HOMEWORKFIVE_TORSO_H
#define HOMEWORKFIVE_TORSO_H

using namespace std;

class Torso: public RobotPart
{
private:
    int batteryComponentNum;
public:
    Torso();
    void setBatteryComponentNum(int);
    int getBatteryComponentNum();
};
#endif //HOMEWORKFIVE_TORSO_H
