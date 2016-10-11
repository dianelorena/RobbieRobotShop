//
// Created by Diane Lorena on 10/9/16.
//

#ifndef HOMEWORKFIVE_ROBOTPART_H
#define HOMEWORKFIVE_ROBOTPART_H

using namespace std;

class RobotPart
{
public:
    RobotPart();
    void setPartName(string);
    string getPartName();

    void setPartNum(int);
    int getPartNum();

    void setPartType(string);
    string getPartType();

    void setPartWeight(double);
    double getPartWeight();

    void setPartCost(double);
    double getPartCost();

    void setPartDescription(string);
    string getPartDescription();



protected:
    string name;
    int partNum;
    string componentType;
    double weight;
    double cost;
    string description;
};

#endif //HOMEWORKFIVE_ROBOTPART_H
