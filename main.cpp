#include <iostream>
#include<string>
#include <vector>

#include "Customer.h"
#include "RobotPart.h"
#include "Torso.h"
#include "Battery.h"
#include "Arm.h"
#include "LocoMotor.h"
#include "Head.h"

using namespace std;

int main()
{
    Customer Juan;

    Juan.setName("Juan felipe");
    Juan.setCustomerId(3947);
    Juan.setOutstandingBill(34.32);

    cout << "name: " << Juan.getName() << "\n";
    cout << "Id \n" << Juan.getCustomerId() << "\n";
    cout << "bill\n" << Juan.getOutstandingBill() << "\n\n\n";

    cout << "this is info for for class Torso\n\n\n";

    Torso juanBody;
    juanBody.setBatteryComponentNum(2);
    juanBody.setPartName("neptune");
    juanBody.setPartNum(34);
    juanBody.setPartType("cuerpecito");
    juanBody.setPartWeight(332.32);
    juanBody.setPartDescription("mi cuerpecito lindo");


    cout << "battery torso num: " << juanBody.getBatteryComponentNum() << "\n";
    cout << "part name: "  << juanBody.getPartName()  << "\n";
    cout << "robot part number: " << juanBody.getPartNum() << "\n";
    cout << "part type: " << juanBody.getPartType() << "\n";
    cout << "part weight: "  << juanBody.getPartWeight()  << "\n";
    cout << "part description: " << juanBody.getPartDescription() << "\n\n\n";

    cout << "this is info for for class Heart\n\n\n";

    Battery heart;
    heart.setkilloWattHour(3);
    heart.setPartName("juan heart");
    heart.setPartNum(3456);
    heart.setPartType("battery");
    heart.setPartWeight(3242.21);
    heart.setPartDescription("mi corazoncito es tuyo");

    cout << "battery torso num: " << heart.getkilloWatHour() << "\n";
    cout << "part name: "  << heart.getPartName()  << "\n";
    cout << "robot part number: " << heart.getPartNum() << "\n";
    cout << "part type: " << heart.getPartType() << "\n";
    cout << "part weight: "  << heart.getPartWeight()  << "\n";
    cout << "part description: " << heart.getPartDescription() << "\n\n\n";

    cout << "this is info for for class Arm\n\n\n";

    Arm left;
    left.setPowerConsume(342);
    left.setPartName("lefty");
    left.setPartNum(4235);
    left.setPartType("arm");
    left.setPartWeight(234.21);
    left.setPartDescription("i am left handed robot");

    cout << "battery torso num: " << left.getPowerConsume() << "\n";
    cout << "part name: "  << left.getPartName()  << "\n";
    cout << "robot part number: " << left.getPartNum() << "\n";
    cout << "part type: " << left.getPartType() << "\n";
    cout << "part weight: "  << left.getPartWeight()  << "\n";
    cout << "part description: " << left.getPartDescription() << "\n\n\n";

    cout << "this is info for for class LocoMotor\n\n\n";

    LocoMotor motorrr;
    motorrr.setMaxSpeed(865);
    motorrr.setWattsConsumed(68403);
    motorrr.setPartName("motorcito");
    motorrr.setPartNum(213);
    motorrr.setPartType("motor");
    motorrr.setPartWeight(234.22);
    motorrr.setPartDescription("mi motorcito brum");

    cout << "max speed: " << motorrr.getMaxSpeed() << "\n";
    cout << "Watts consumed: " << motorrr.getWattsConsumed() << "\n";
    cout << "part name: "  << motorrr.getPartName()  << "\n";
    cout << "robot part number: " << motorrr.getPartNum() << "\n";
    cout << "part type: " << motorrr.getPartType() << "\n";
    cout << "part weight: "  << motorrr.getPartWeight()  << "\n";
    cout << "part description: " << motorrr.getPartDescription() << "\n\n\n";

    cout << "this is info for for class Head\n\n\n";

    Head cerebro;

    cerebro.setPartName("pinky");
    cerebro.setPartNum(9684);
    cerebro.setPartType("Head");
    cerebro.setPartWeight(2623.22);

    cout << "part name: "  << motorrr.getPartName()  << "\n";
    cout << "robot part number: " << motorrr.getPartNum() << "\n";
    cout << "part type: " << motorrr.getPartType() << "\n";
    cout << "part weight: "  << motorrr.getPartWeight()  << "\n";



    return 0;
}