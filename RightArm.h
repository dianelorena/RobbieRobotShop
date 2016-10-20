//
// Created by Diane Lorena on 10/17/16.
//
#include <iostream>
#include "RobotPart.h"

#ifndef HOMEWORKFIVE_RIGHTARM_H
#define HOMEWORKFIVE_RIGHTARM_H

using namespace std;

class RightArm: public RobotPart
{
private:
    int powerConsume;
public:
    RightArm();
    void setPowerConsume(int);
    int getPowerConsume();
};

#endif //HOMEWORKFIVE_RIGHTARM_H
