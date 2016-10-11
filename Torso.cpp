//
// Created by Diane Lorena on 10/9/16.
//
#include<string>
#include <iostream>
#include <vector>

#include "Torso.h"

using namespace std;

Torso::Torso()
{

};

void Torso::setBatteryComponentNum(int batteryNum)
{
    batteryComponentNum = batteryNum;
}

int Torso::getBatteryComponentNum()
{
    return batteryComponentNum;

}

