//
// Created by Diane Lorena on 10/11/16.
//

#include <iostream>
#include<string>

#include "RobotModel.h"
#include "RobotPart.h"
#include "LeftArm.h"
#include "Store.h"
#include "RightArm.h"
#include "Torso.h"
#include "Battery.h"

using namespace std;



RobotModel::RobotModel()
{

}
////////////////////////setting up general robot model info///////////////////////////////////////////////
void RobotModel::setModelDescription(string modelSummary)
{
    modelDescription = modelSummary;
}

string RobotModel::getModelDescription()
{
    return modelDescription;
}

void RobotModel::setShippingCost(double shipping)
{
    shippingCost = shipping;
}
double RobotModel::getShippingCost()
{
    return shippingCost;
}

void RobotModel::setName(string robotModelName)
{
    name = robotModelName;
}

string RobotModel::getName()
{
     return name;
}

void RobotModel::setSellingPrice(double sellPrice)
{
    sellingPrice = sellPrice;
}
double RobotModel::getSellingPrice()
{
    return sellingPrice;
}

void RobotModel:: setModelNum(int robotModelNum)
{
    modelNum = robotModelNum;
}

int RobotModel:: getModelNum()
{
    return modelNum;
}

void RobotModel::setComponentsCost(double robotComponentsCost)
{
    allComponentsCost = robotComponentsCost;
}

double RobotModel::getComponentsCost()
{
    return allComponentsCost;
}

void RobotModel::setTotalModelsSold(int totalRobotsSold)
{
    totalModelsSold = totalRobotsSold;
}

int RobotModel::getTotalModelsSold()
{
  return totalModelsSold;
}

void RobotModel::setProfitMargin(double robotProfitMargin)
{
    profitMargin = robotProfitMargin;
}

double RobotModel::getProfitMargin()
{
    return profitMargin;
}

void RobotModel::setTotalBatteryNum(int robotTotalBatteries)
{
    totalBatteryNum = robotTotalBatteries;
}

int RobotModel::getTotalBatteryNum()
{
    return totalBatteryNum;
}

RobotModel RobotModel::robotModelGenerator()
{
    char tempCharArray[200];
    string tempString;
    int tempNum = 0;
    double tempDouble = 0.00;
    int armsResponse;
    RobotModel generalRobotModel;

    //setting robot model name
    cout << "Please enter robot model name: \n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray, sizeof(tempCharArray));
    tempString = string(tempCharArray);
    generalRobotModel.setName(tempString);


    //user inputs model number and checks that is not less than zero or already exists

    do {
        cout << "Please enter robot model number: \n";
        cin >> tempNum;

        if ((tempNum < 0) || (Store::checkForRobotModelDuplicates(tempNum) == 1)) {
            cout << "error: number entered is negative or already exists please try again\n";
        }
        if ((tempNum >= 0) && (Store::checkForRobotModelDuplicates(tempNum) == 0)) {
            generalRobotModel.setModelNum(tempNum);
            Store::addRobotModelNum(tempNum);
            break;
        }
    } while (true);

    //setting robot model Description
    cout << "Please enter robot model description: \n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray, sizeof(tempCharArray));
    tempString = string(tempCharArray);
    generalRobotModel.setModelDescription(tempString);

    //user inputs selling prices and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: selling price enter is negative please try again\n";
        }
        cout <<"Please enter selling price for this robot model: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    generalRobotModel.setSellingPrice(tempDouble);


    //user inputs shipping cost and checks that is not less than zero
    tempNum = 0;
    do{
        if(tempDouble < 0)
        {
            cout << "error: shipping cost enter is negative please try again\n";
        }
        cout <<"Please enter shipping cost of this robot model: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    generalRobotModel.setShippingCost(tempDouble);

    cout << "\n\n";

    return generalRobotModel;
}


// //////////////////////////////////////////SETTING THE ROBOT HEAD///////////////////////////////////////
void RobotModel::setRobotHead()
{
    char tempCharArray[200];
    string tempString;
    int tempNum = 0;
    double tempDouble;




    //user inputs head name
    cout <<"Please enter robot head part name: \n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotHead.setPartName(tempString);

    //user inputs part number and checks that is not less than zero or already exists
    do{
        cout <<"Please enter a robot head part number: \n";
        cin >> tempNum;

        if((tempNum < 0) || (Store::checkForDuplicates(tempNum) == 1))
        {
            cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "error: number entered is negative or already exists please try again\n";
        }
        if((tempNum >= 0) && (Store::checkForDuplicates(tempNum) == 0))
        {
            robotHead.setPartNum(tempNum);
            Store::addPartNum(tempNum);
            break;
        }
    } while(true);


    //user inputs component type

    robotHead.setPartType("Head");


    //user inputs head weight and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: weight enter is negative please try again\n";
        }
        cout <<"Please enter weight of robot head: \n";
        cin >> tempDouble;

    }while(tempDouble < 0);
    robotHead.setPartWeight(tempDouble);

    //user inputs cost and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: cost enter is negative please try again\n";
        }
        cout <<"Please enter cost of robot head: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    robotHead.setPartCost(tempDouble);

    // user inputs description of robot
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Please enter description of robot head: \n";
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotHead.setPartDescription(tempString);

    robotHead.setActiveStatus(true);

    cout << "\n\n\n";
}

// return all info about the head of this robot model

string RobotModel::getRobotHeadName()
{
    return robotHead.getPartName();
};

int RobotModel::getRobotHeadPartNum()
{
    return robotHead.getPartNum();
}

string RobotModel::getRobotHeadComponentType()
{
    return robotHead.getPartType();
}

double RobotModel::getRobotHeadWeight()
{
    return robotHead.getPartWeight();
}

double RobotModel::getRobotHeadCost()
{
    return robotHead.getPartCost();
}

string RobotModel::getRobotHeadDescription()
{
    return robotHead.getPartDescription();
}

bool RobotModel::getRobotHeadActiveStatus()
{
    return robotHead.getActiveStatus();
}

/////////////////////////////////////SETTING THE ROBOT LOCOMOTOR///////////////////////////////////
void RobotModel::setRobotLocomotor()
{
    char tempCharArray[200];
    string tempString;
    int tempNum;
    double tempDouble;

    //user inputs locomotor name
    cout <<"Please enter robot locomotor part name: \n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotLocoMotor.setPartName(tempString);

    //user inputs part number program checks that is not less than zero and is not repeated with an existing part num
    do{
        cout <<"Please enter a robot locomotor part number: \n";
        cin >> tempNum;

        if((tempNum < 0) || (Store::checkForDuplicates(tempNum) == 1))
        {
            cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "error: number entered is negative or already exists please try again\n";
        }
        if((tempNum >= 0) && (Store::checkForDuplicates(tempNum) == 0))
        {
            robotLocoMotor.setPartNum(tempNum);
            Store::addPartNum(tempNum);
            break;
        }
    } while(true);

    //user inputs locomotor part type

    robotLocoMotor.setPartType("LocoMotor");


    //user inputs locomotor weight and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: weight enter is negative please try again\n";
        }
        cout <<"Please enter weight of robot locomotor: \n";
        cin >> tempDouble;

    }while(tempDouble < 0);
    robotLocoMotor.setPartWeight(tempDouble);

    //user inputs cost and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: cost enter is negative please try again\n";
        }
        cout <<"Please enter cost of robot locomotor: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    robotLocoMotor.setPartCost(tempDouble);

    // user inputs description of robot locomotor part
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Please enter description of robot locomotor: \n";
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotLocoMotor.setPartDescription(tempString);

    //user inputs max speed and checks that is not less than zero
    do{
        if(tempNum < 0)
        {
            cout << "error: number entered is negative please try again\n";
        }
        cout <<"Please enter a robot locomotor max speed number: \n";
        cin >> tempNum;
    } while(tempNum <  0);
    robotLocoMotor.setMaxSpeed(tempNum);

    //user inputs watts consume and checks that is not less than zero
    do{
        if(tempNum < 0)
        {
            cout << "error: number entered is negative please try again\n";
        }
        cout <<"Please enter a robot locomotor watts consume number: \n";
        cin >> tempNum;
    } while(tempNum <  0);
    robotLocoMotor.setWattsConsumed(tempNum);

    robotLocoMotor.setActiveStatus(true);
}

// return all info about the locomotor of this robot model
string RobotModel::getRobotLocomotorName()
{
    return robotLocoMotor.getPartName();
};

int RobotModel::getRobotLocomotorPartNum()
{
    return robotLocoMotor.getPartNum();
}

string RobotModel::getRobotLocomotorComponentType()
{
    return robotLocoMotor.getPartType();
}

double RobotModel::getRobotLocomotorWeight()
{
    return robotLocoMotor.getPartWeight();
}

double RobotModel::getRobotLocomotorCost()
{
    return robotLocoMotor.getPartCost();
}

string RobotModel::getRobotLocomotorDescription()
{
    return robotLocoMotor.getPartDescription();
}

bool RobotModel::getRobotLocomotorActiveStatus()
{
    return robotLocoMotor.getActiveStatus();
}

int RobotModel::getRobotLocomotorMaxSpeed()
{
    return robotLocoMotor.getMaxSpeed();
}

int RobotModel::getRobotLocomotorWattsConsume()
{
    return robotLocoMotor.getWattsConsumed();
}

///////////////////////////////////SETTING THE ROBOT LEFT ARM/////////////////////////////////////
void RobotModel::setRobotLeftArm()
{
    char tempCharArray[200];
    string tempString;
    int tempNum;
    double tempDouble;

    //user inputs left hand name
    cout <<"Please enter robot left hand part name: \n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotLeftArm.setPartName(tempString);

    //user inputs part number and checks that is not less than zero or already exists
    do{
        cout <<"Please enter a robot left hand part number: \n";
        cin >> tempNum;

        if((tempNum < 0) || (Store::checkForDuplicates(tempNum) == 1))
        {
            cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "error: number entered is negative or already exists please try again\n";
        }
        if((tempNum >= 0) && (Store::checkForDuplicates(tempNum) == 0))
        {
            robotLeftArm.setPartNum(tempNum);
            Store::addPartNum(tempNum);
            break;
        }
    } while(true);

    //component type gets set
    robotLeftArm.setPartType("Left Arm");

    //user inputs left arm weight and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: weight enter is negative please try again\n";
        }
        cout <<"Please enter weight of robot left arm: \n";
        cin >> tempDouble;

    }while(tempDouble < 0);
    robotLeftArm.setPartWeight(tempDouble);

    //user inputs cost and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: cost enter is negative please try again\n";
        }
        cout <<"Please enter cost of robot left arm: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    robotLeftArm.setPartCost(tempDouble);

    // user inputs description of robot
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Please enter description of robot left arm: \n";
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotLeftArm.setPartDescription(tempString);

    robotLeftArm.setActiveStatus(true);

    //user inputs left arm power and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: cost enter is negative please try again\n";
        }
        cout <<"Please enter robot power of the left arm: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    robotLeftArm.setPowerConsume(tempDouble);

}
string RobotModel::getRobotLeftArmName() {
    return robotLeftArm.getPartName();
}

int RobotModel::getRobotLeftArmPartNum()
{
    return robotLeftArm.getPartNum();
}

string RobotModel::getRobotLeftArmComponentType()
{
    return robotLeftArm.getPartType();
}

double RobotModel::getRobotLeftArmWeight()
{
    return robotLeftArm.getPartWeight();
}

double RobotModel::getRobotLeftArmCost()
{
    return robotLeftArm.getPartCost();
}

string RobotModel::getRobotLeftArmDescription()
{
    return robotLeftArm.getPartDescription();
}

bool RobotModel::getRobotLeftArmActiveStatus()
{
    return robotLeftArm.getActiveStatus();
}

int RobotModel::getRobotLeftArmPower()
{
    return robotLeftArm.getPowerConsume();
}

///////////////////////////////////SETTING THE ROBOT RIGHT ARM/////////////////////////////////////

void RobotModel::setRobotRightArm()
{
    char tempCharArray[200];
    string tempString;
    int tempNum;
    double tempDouble;

    //user inputs left hand name
    cout <<"Please enter robot Right hand part name: \n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotRightArm.setPartName(tempString);

    //user inputs part number and checks that is not less than zero or already exists
    do{
        cout <<"Please enter a robot right hand part number: \n";
        cin >> tempNum;

        if((tempNum < 0) || (Store::checkForDuplicates(tempNum) == 1))
        {
            cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "error: number entered is negative or already exists please try again\n";
        }
        if((tempNum >= 0) && (Store::checkForDuplicates(tempNum) == 0))
        {
            robotRightArm.setPartNum(tempNum);
            Store::addPartNum(tempNum);
            break;
        }
    } while(true);

    //Right Arm gets Set
    robotRightArm.setPartType("Right Arm");


    //user inputs left arm weight and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: weight enter is negative please try again\n";
        }
        cout <<"Please enter weight of robot right arm: \n";
        cin >> tempDouble;

    }while(tempDouble < 0);
    robotRightArm.setPartWeight(tempDouble);

    //user inputs cost and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: cost enter is negative please try again\n";
        }
        cout <<"Please enter cost of robot right arm: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    robotRightArm.setPartCost(tempDouble);

    // user inputs description of robot
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Please enter description of robot left arm: \n";
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotRightArm.setPartDescription(tempString);

    robotRightArm.setActiveStatus(true);

    //user inputs left arm power and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: cost enter is negative please try again\n";
        }
        cout <<"Please enter robot power of the right arm: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    robotRightArm.setPowerConsume(tempDouble);
}

string RobotModel::getRobotRightArmName()
{
    return robotRightArm.getPartName();
}

int RobotModel::getRobotRightArmPartNum()
{
    return robotRightArm.getPartNum();
}

string RobotModel::getRobotRightArmComponentType()
{
    return robotRightArm.getPartType();
}

double RobotModel::getRobotRightArmWeight()
{
    return robotRightArm.getPartWeight();
}

double RobotModel::getRobotRightArmCost()
{
    return robotRightArm.getPartCost();
}

string RobotModel::getRobotRightArmDescription()
{
    return robotRightArm.getPartDescription();
}

bool RobotModel::getRobotRightArmActiveStatus()
{
    return robotRightArm.getActiveStatus();
}

int RobotModel::getRobotRightArmPower()
{
    return robotRightArm.getPowerConsume();
}


////////////////////////////SETTING THE ROBOT TORSO//////////////////////////////////////////////

void RobotModel::setRobotTorso()
{
    char tempCharArray[200];
    string tempString;
    int tempNum = 0;
    double tempDouble;


    //user inputs torso name
    cout <<"Please enter robot torso part name: \n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotTorso.setPartName(tempString);

    //user inputs part number and checks that is not less than zero or already exists
    do{
        cout <<"Please enter a robot torso part number: \n";
        cin >> tempNum;

        if((tempNum < 0) || (Store::checkForDuplicates(tempNum) == 1))
        {
            cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "error: number entered is negative or already exists please try again\n";
        }
        if((tempNum >= 0) && (Store::checkForDuplicates(tempNum) == 0))
        {
            robotTorso.setPartNum(tempNum);
            Store::addPartNum(tempNum);
            break;
        }
    } while(true);

    //user inputs component type
    robotTorso.setPartType("Torso");

    //user inputs torso weight and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: weight enter is negative please try again\n";
        }
        cout <<"Please enter weight of robot torso: \n";
        cin >> tempDouble;

    }while(tempDouble < 0);
    robotTorso.setPartWeight(tempDouble);

    //user inputs cost and checks that is not less than zero
    do{
        if(tempDouble < 0)
        {
            cout << "error: cost enter is negative please try again\n";
        }
        cout <<"Please enter cost of robot Torso: \n";
        cin >> tempDouble;
    }while(tempDouble < 0);
    robotTorso.setPartCost(tempDouble);

    // user inputs description of robot
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Please enter description of robot torson: \n";
    cin.getline(tempCharArray,sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotTorso.setPartDescription(tempString);

    robotTorso.setActiveStatus(true);

    //user inputs torso max batteries and checks that is not less than one or greater than 3

    do {
        cout << "Please enter torso max batteries: \n";
        cin >> tempNum;

        if((tempNum > 3) || (tempNum < 1))
        {
            cout << "error: number of batteries must be from 1-3: \n";
        }

        if((tempNum <= 3) && (tempNum >= 1))
        {
            robotTorso.setMaxBatteries(tempNum);
            break;
        }
    }while(true);

}
string RobotModel::getRobotTorsoName()
{
    return robotTorso.getPartName();
}

int RobotModel::getRobotTorsoPartNum()
{
    return robotTorso.getPartNum();
}

string RobotModel::getRobotTorsoComponentType()
{
    return robotTorso.getPartType();
}

double RobotModel::getRobotTorsoWeight()
{
    return robotTorso.getPartWeight();
}

double RobotModel::getRobotTorsoCost()
{
    return robotTorso.getPartCost();
}

string RobotModel::getRobotTorsoDescription()
{
    return robotTorso.getPartDescription();
}

bool RobotModel::getRobotTorsoActiveStatus()
{
    return robotTorso.getActiveStatus();
}

int RobotModel::getRobotTorsoMaxBatteries()
{
    return robotTorso.getMaxBatteries();
}

/////////////////////////////SETTING ROBOT BATTERY//////////

Battery RobotModel::setRobotBattery(int totalBatteryNum)
{

    if(totalBatteryNum == 1)
    {
        cout << "Please enter battery One information\n";
        robotBatteryOne = Battery::batteryGenerator();
        return robotBatteryOne;
    }

    if(totalBatteryNum == 2)
    {
        cout << "Please enter battery One information\n";
        robotBatteryOne = Battery::batteryGenerator();
        cout << "Please enter battery Two information\n";
        robotBatteryTwo = Battery::batteryGenerator();

    }

    if(totalBatteryNum == 3)
    {
        cout << "Please enter battery One information\n";
        robotBatteryOne = Battery::batteryGenerator();
        cout << "Please enter battery Two information\n";
        robotBatteryTwo = Battery::batteryGenerator();
        cout << "Please enter battery Three information\n";
        robotBatteryThree = Battery::batteryGenerator();
    }

    return (robotBatteryOne);
}

double RobotModel::getBatteriesPrice()
{
    double totalBatteriesPrice = 0.00;
    if(totalBatteryNum == 1)
    {
        totalBatteriesPrice = this->robotBatteryOne.getPartCost();
    }
    if(totalBatteryNum == 2)
    {
        totalBatteriesPrice = this->robotBatteryOne.getPartCost() + this->robotBatteryTwo.getPartCost();
    }

    if(totalBatteryNum == 3)
    {
        totalBatteriesPrice = this->robotBatteryOne.getPartCost() + this->robotBatteryTwo.getPartCost();
        totalBatteriesPrice += this->robotBatteryThree.getPartCost();
    }

    return totalBatteriesPrice;
}

////////////BATTERY ONE/////////////////////////////////
string RobotModel::getRobotBatteryOneName()
{
    return robotBatteryOne.getPartName();
}
int RobotModel::getRobotBatteryOnePartNum()
{
    return robotBatteryOne.getPartNum();
}
string RobotModel::getRobotBatteryOneComponentType()
{
    return robotBatteryOne.getPartType();
}
double RobotModel::getRobotBatteryOneWeight()
{
    return robotBatteryOne.getPartWeight();
}
double RobotModel::getRobotBatteryOneCost()
{
    return robotBatteryOne.getPartCost();
}
string RobotModel::getRobotBatteryOneDescription()
{
    return robotBatteryOne.getPartDescription();
}
bool RobotModel::getRobotBatteryOneActiveStatus()
{
    return robotBatteryOne.getActiveStatus();
}
int RobotModel::getRobotBatteryOneEnergyContained()
{
    return robotBatteryOne.getEnergyContained();
}

//////////////////Battery two/////////////////////
string RobotModel::getRobotBatteryTwoName()
{
    return robotBatteryTwo.getPartName();
}
int RobotModel::getRobotBatteryTwoPartNum()
{
    return robotBatteryTwo.getPartNum();
}
string RobotModel::getRobotBatteryTwoComponentType()
{
    return robotBatteryTwo.getPartType();
}
double RobotModel::getRobotBatteryTwoWeight()
{
    return robotBatteryTwo.getPartWeight();
}
double RobotModel::getRobotBatteryTwoCost()
{
    return robotBatteryTwo.getPartCost();
}
string RobotModel::getRobotBatteryTwoDescription()
{
    return robotBatteryTwo.getPartDescription();
}
bool RobotModel::getRobotBatteryTwoActiveStatus()
{
    return robotBatteryTwo.getActiveStatus();
}
int RobotModel::getRobotBatteryTwoEnergyContained()
{
    return robotBatteryTwo.getEnergyContained();
}

///////////////Battery Three/////////////////////////////
string RobotModel::getRobotBatteryThreeName()
{
    return robotBatteryThree.getPartName();
}
int RobotModel::getRobotBatteryThreePartNum()
{
    return robotBatteryThree.getPartNum();
}
string RobotModel::getRobotBatteryThreeComponentType()
{
    return robotBatteryThree.getPartType();
}
double RobotModel::getRobotBatteryThreeWeight()
{
    return robotBatteryThree.getPartWeight();
}
double RobotModel::getRobotBatteryThreeCost()
{
    return robotBatteryThree.getPartCost();
}
string RobotModel::getRobotBatteryThreeDescription()
{
    return robotBatteryThree.getPartDescription();
}
bool RobotModel::getRobotBatteryThreeActiveStatus()
{
    return robotBatteryThree.getActiveStatus();
}
int RobotModel::getRobotBatteryThreeEnergyContained()
{
    return robotBatteryThree.getEnergyContained();
}

