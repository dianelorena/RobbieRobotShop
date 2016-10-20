//
// Created by Diane Lorena on 10/9/16.
//
#include<string>
#include <iostream>
#include <vector>

#include "Torso.h"

using namespace std;

Torso:: Torso()
{

};

void Torso::setMaxBatteries(int batteryNum)
{
    maxBatteries = batteryNum;
}

int Torso::getMaxBatteries()
{
    return maxBatteries;

}

