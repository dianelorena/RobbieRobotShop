//
// Created by Diane Lorena on 10/9/16.
//
#include<string>
#include "Store.h"
#include "Battery.h"

using namespace std;

Battery::Battery()
{

};

void Battery::setEnergyContained(int energyContained)
{
    energyBatteryContains = energyContained;
}
int Battery::getEnergyContained()
{
    return energyBatteryContains;
}

Battery Battery::batteryGenerator()
{
    char tempCharArray[200];
    string tempString;
    int tempNum = 0;
    double tempDouble;
    Battery robotBattery;


    //user inputs torso name
    cout << "Please enter robot battery part name: \n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray, sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotBattery.setPartName(tempString);

    //user inputs part number and checks that is not less than zero or already exists
    do {
        cout << "Please enter a battery part number: \n";
        cin >> tempNum;

        if ((tempNum < 0) || (Store::checkForDuplicates(tempNum) == 1))
        {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "error: number entered is negative or already exists please try again\n";
        }
        if ((tempNum >= 0) && (Store::checkForDuplicates(tempNum) == 0)) {
            robotBattery.setPartNum(tempNum);
            Store::addPartNum(tempNum);
            break;
        }
    } while (true);

    //Part type is set

    robotBattery.setPartType("Battery");


    //user inputs torso weight and checks that is not less than zero
    do {
        if (tempDouble < 0) {
            cout << "error: weight enter is negative please try again\n";
        }
        cout << "Please enter weight of robot battery: \n";
        cin >> tempDouble;

    } while (tempDouble < 0);
    robotBattery.setPartWeight(tempDouble);

    //user inputs cost and checks that is not less than zero
    do {
        if (tempDouble < 0) {
            cout << "error: cost enter is negative please try again\n";
        }
        cout << "Please enter cost of robot Battery: \n";
        cin >> tempDouble;
    } while (tempDouble < 0);
    robotBattery.setPartCost(tempDouble);



    // user inputs description of robot
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Please enter description of robot battery: \n";
    cin.getline(tempCharArray, sizeof(tempCharArray));
    tempString = string(tempCharArray);
    robotBattery.setPartDescription(tempString);

    robotBattery.setActiveStatus(true);

    //user inputs energy contained by batteries
    do {
        if (tempNum < 0) {
            cout << "error: battery energy enter is negative please try again\n";
        }
        cout << "Please enter total energy that battery contains: \n";
        cin >> tempNum;

    } while (tempNum < 0);
    robotBattery.setEnergyContained(tempNum);

    robotBattery.setActiveStatus(true);



    return robotBattery;
}


