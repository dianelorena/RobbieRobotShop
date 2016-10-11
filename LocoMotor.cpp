//
// Created by Diane Lorena on 10/9/16.
//
#include<string>
#include <vector>
#include "LocoMotor.h"

using namespace std;

LocoMotor:: LocoMotor()
{

};

void LocoMotor::setMaxSpeed(int maximumSpeed)
{
    maxSpeed = maximumSpeed;
}

int LocoMotor::getMaxSpeed()
{
    return maxSpeed;
}

void LocoMotor::setWattsConsumed(int wattsNowConsumed)
{
    wattsConsumed = wattsNowConsumed;
}
int LocoMotor::getWattsConsumed()
{
    return wattsConsumed;
}