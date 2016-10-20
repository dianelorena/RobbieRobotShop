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
    int maxBatteries;
public:
    Torso();
    void setMaxBatteries(int);
    int getMaxBatteries();
};

#endif //HOMEWORKFIVE_TORSO_H
