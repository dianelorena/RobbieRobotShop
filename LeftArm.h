//
// Created by Diane Lorena on 10/9/16.
//
#include <iostream>
#include "RobotPart.h"

#ifndef HOMEWORKFIVE_ARM_H
#define HOMEWORKFIVE_ARM_H

using namespace std;

class LeftArm: public RobotPart
{
    private:
        int powerConsume;
    public:
        LeftArm();
        void setPowerConsume(int);
        int getPowerConsume();
};

#endif //HOMEWORKFIVE_ARM_H
