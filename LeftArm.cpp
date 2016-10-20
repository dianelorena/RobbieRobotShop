//
// Created by Diane Lorena on 10/9/16.
//
#include<string>
#include <iostream>
#include <vector>
#include "RobotPart.h"
#include "LeftArm.h"

using namespace std;

LeftArm::LeftArm()
{

};

void LeftArm::setPowerConsume(int numPowerConsume)
{
    powerConsume = numPowerConsume;
}

int LeftArm::getPowerConsume()
{
    return powerConsume;
}



