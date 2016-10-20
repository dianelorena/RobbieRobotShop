//
// Created by Diane Lorena on 10/11/16.
//

#include <iostream>
#include<string>

#include "Torso.h"
#include "Battery.h"
#include "LeftArm.h"
#include "LocoMotor.h"
#include "Head.h"
#include "Store.h"
#include "RightArm.h"

#ifndef HOMEWORKFIVE_ROBOTMODEL_H
#define HOMEWORKFIVE_ROBOTMODEL_H

using namespace std;

class RobotModel
{
private:
    string name;
    int modelNum;
    double sellingPrice;
    double allComponentsCost;
    int totalModelsSold;
    double profitMargin;
    double shippingCost;
    int totalArmsNum;
    int totalBatteryNum;
    string modelDescription;
    Head robotHead;
    LocoMotor robotLocoMotor;
    LeftArm robotLeftArm;
    RightArm robotRightArm;
    Torso robotTorso;
    Battery robotBatteryOne;
    Battery robotBatteryTwo;
    Battery robotBatteryThree;

public:
    RobotModel();

    //Setting the basics of all models

    void setModelDescription(string);
    string getModelDescription();

    void setShippingCost(double);
    double getShippingCost();

    void setName(string);
    string getName();

    void setModelNum(int);
    int getModelNum();

    void setSellingPrice(double);
    double getSellingPrice();

    void setComponentsCost(double);
    double getComponentsCost();

    void setTotalModelsSold(int);
    int getTotalModelsSold();

    void setProfitMargin(double);
    double getProfitMargin();

    void setTotalBatteryNum(int);
    int getTotalBatteryNum();

    //general information for each model
    static RobotModel robotModelGenerator();

    //Head information
    void setRobotHead();
    string getRobotHeadName();
    int getRobotHeadPartNum();
    string getRobotHeadComponentType();
    double getRobotHeadWeight();
    double getRobotHeadCost();
    string getRobotHeadDescription();
    bool getRobotHeadActiveStatus();

    //Locomotor information
    void setRobotLocomotor();
    string getRobotLocomotorName();
    int getRobotLocomotorPartNum();
    string getRobotLocomotorComponentType();
    double getRobotLocomotorWeight();
    double getRobotLocomotorCost();
    string getRobotLocomotorDescription();
    bool getRobotLocomotorActiveStatus();
    int getRobotLocomotorMaxSpeed();
    int getRobotLocomotorWattsConsume();

    //left Arm information
    void setRobotLeftArm();
    string getRobotLeftArmName();
    int getRobotLeftArmPartNum();
    string getRobotLeftArmComponentType();
    double getRobotLeftArmWeight();
    double getRobotLeftArmCost();
    string getRobotLeftArmDescription();
    bool getRobotLeftArmActiveStatus();
    int getRobotLeftArmPower();

    //Right Arm information
    void setRobotRightArm();
    string getRobotRightArmName();
    int getRobotRightArmPartNum();
    string getRobotRightArmComponentType();
    double getRobotRightArmWeight();
    double getRobotRightArmCost();
    string getRobotRightArmDescription();
    bool getRobotRightArmActiveStatus();
    int getRobotRightArmPower();

    //Torso Information
    void setRobotTorso();
    string getRobotTorsoName();
    int getRobotTorsoPartNum();
    string getRobotTorsoComponentType();
    double getRobotTorsoWeight();
    double getRobotTorsoCost();
    string getRobotTorsoDescription();
    bool getRobotTorsoActiveStatus();
    int getRobotTorsoMaxBatteries();

    //BatteryInformation
    Battery setRobotBattery(int);
    double getBatteriesPrice();

    //battery One
    string getRobotBatteryOneName();
    int getRobotBatteryOnePartNum();
    string getRobotBatteryOneComponentType();
    double getRobotBatteryOneWeight();
    double getRobotBatteryOneCost();
    string getRobotBatteryOneDescription();
    bool getRobotBatteryOneActiveStatus();
    int getRobotBatteryOneEnergyContained();

    //Battery two
    string getRobotBatteryTwoName();
    int getRobotBatteryTwoPartNum();
    string getRobotBatteryTwoComponentType();
    double getRobotBatteryTwoWeight();
    double getRobotBatteryTwoCost();
    string getRobotBatteryTwoDescription();
    bool getRobotBatteryTwoActiveStatus();
    int getRobotBatteryTwoEnergyContained();

    //Battery Three
    string getRobotBatteryThreeName();
    int getRobotBatteryThreePartNum();
    string getRobotBatteryThreeComponentType();
    double getRobotBatteryThreeWeight();
    double getRobotBatteryThreeCost();
    string getRobotBatteryThreeDescription();
    bool getRobotBatteryThreeActiveStatus();
    int getRobotBatteryThreeEnergyContained();




};


#endif //HOMEWORKFIVE_ROBOTMODEL_H
