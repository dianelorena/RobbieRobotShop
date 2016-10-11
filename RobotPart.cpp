//
// Created by Diane Lorena on 10/9/16.
//
#include<string>
#include <vector>

#include "RobotPart.h"

using namespace std;

RobotPart::RobotPart()
{

}

void RobotPart::setPartName(string robotPartName)
{
    name = robotPartName;
}

string RobotPart::getPartName()
{
    return name;
}

void RobotPart::setPartNum(int partNumber)
{
    partNum = partNumber;
}

int RobotPart::getPartNum()
{
    return partNum;
}

void RobotPart::setPartType(string robotPartType)
{
    componentType = robotPartType;
}

string RobotPart::getPartType()
{
    return componentType;
}

void RobotPart::setPartWeight(double partWeight)
{
    weight = partWeight;
}

double RobotPart::getPartWeight()
{
    return weight;
}

void RobotPart::setPartCost(double partCost)
{
    cost = partCost;
}

double RobotPart::getPartCost()
{
    return cost;
}

void RobotPart::setPartDescription(string partDescription)
{
    description = partDescription;
}

string RobotPart::getPartDescription()
{
    return description;
}






