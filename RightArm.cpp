//
// Created by Diane Lorena on 10/17/16.
//

#include "RightArm.h"
#include<string>
#include <iostream>
#include <vector>
#include "RobotPart.h"


using namespace std;

RightArm::RightArm()
{

};

void RightArm::setPowerConsume(int numPowerConsume)
{
    powerConsume = numPowerConsume;
}

int RightArm::getPowerConsume()
{
    return powerConsume;
}
