//
// Created by Diane Lorena on 10/9/16.
//
#include<string>
#include "Battery.h"

using namespace std;

Battery::Battery()
{

};

void Battery::setkilloWattHour(int killoWattPerHour)
{
    killoWattHour = killoWattPerHour;
}
int Battery::getkilloWatHour()
{
    return killoWattHour;
}
