//
// Created by Diane Lorena on 10/9/16.
//
#include<string>
#include <iostream>
#include <vector>
#include "RobotPart.h"
#include "Arm.h"

using namespace std;

Arm::Arm()
{

};

void Arm::setPowerConsume(int numPowerConsume)
{
    powerConsume = numPowerConsume;
}

int Arm::getPowerConsume()
{
    return powerConsume;
}



