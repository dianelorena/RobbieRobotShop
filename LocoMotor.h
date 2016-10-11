//
// Created by Diane Lorena on 10/9/16.
//
#include <iostream>
#include "RobotPart.h"

#ifndef HOMEWORKFIVE_LOCOMOTOR_H
#define HOMEWORKFIVE_LOCOMOTOR_H

using namespace std;

class LocoMotor: public RobotPart
{
private:
    int maxSpeed;
    int wattsConsumed;
public:
    LocoMotor();
    void setMaxSpeed(int);
    int getMaxSpeed();
    void setWattsConsumed(int);
    int getWattsConsumed();
};


#endif //HOMEWORKFIVE_LOCOMOTOR_H
