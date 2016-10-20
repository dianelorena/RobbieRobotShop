#include <iostream>
#include<string>
#include <vector>

#include "Customer.h"
#include "RobotPart.h"
#include "Torso.h"
#include "Battery.h"
#include "LeftArm.h"
#include "LocoMotor.h"
#include "Head.h"
#include "RobotModel.h"
#include "Store.h"
#include "SalesAssociate.h"
#include "Order.h"
#include "RightArm.h"

using namespace std;

std::vector<int> Store::allPartNums;
std::vector<int> Store::allRobotModelNums;
std::vector<RobotModel> Store::robotModelsLibrary;
std::vector<Customer> Store::allCustomers;
std::vector<Order> Store::allOrders;
std::vector<SalesAssociate> Store::allSaleAssociates;


int main()
{
    RobotModel generalModel;
    Customer newCustomer;
    Store robotStore;
    Order newOrder;
    SalesAssociate newSalesAssociate;
    int mainMenuResponse;
    int createMenuResponse;
    int viewMenuResponse;
    int desiredPartNum;





    do {
        mainMenuResponse = robotStore.mainMenuMessage();
        cout << "\n";

        if(mainMenuResponse == 0)
        {
            cout << "You have now exited the program\n";
            cout << "Thank you for shopping at Robbie Robot Shop\n";
            break;
        }

        if (mainMenuResponse == 1)
        {
            createMenuResponse = robotStore.createMenuMessage();
            if (createMenuResponse == 1)
            {
                //create user desire robot model
                generalModel = RobotModel::robotModelGenerator();

                do {
                    desiredPartNum = robotStore.robotPartPickerMessage();

                    if (desiredPartNum == 1) {
                        if ((generalModel.getRobotHeadActiveStatus()) == 1) {
                            cout << "Error: you have created a head already please try a new part \n";
                        } else {
                            generalModel.setRobotHead();
                            //adds cost of right arm to robot model total parts cost
                            generalModel.setComponentsCost(
                                    (generalModel.getComponentsCost() + generalModel.getRobotHeadCost()));
                        }
                    }

                    if (desiredPartNum == 2) {
                        if (generalModel.getRobotLocomotorActiveStatus() == 1) {
                            cout << "Error: you have created a Locomotor already please try a new part \n";
                        } else {
                            generalModel.setRobotLocomotor();
                            //adds cost of right arm to robot model total parts cost
                            generalModel.setComponentsCost(
                                    (generalModel.getComponentsCost() + generalModel.getRobotLocomotorCost()));
                        }
                    }

                    if (desiredPartNum == 3) {
                        if (generalModel.getRobotLeftArmActiveStatus() == 1) {
                            cout << "Error: you have created a left arm already please try a new part \n";
                        } else {
                            generalModel.setRobotLeftArm();
                            //adds cost of right arm to robot model total parts cost
                            generalModel.setComponentsCost(
                                    (generalModel.getComponentsCost() + generalModel.getRobotLeftArmCost()));

                        }
                    }

                    if (desiredPartNum == 4) {
                        if (generalModel.getRobotRightArmCost() == 1) {
                            cout << "Error: you have created a right arm already please try a new part \n";
                        } else {
                            generalModel.setRobotRightArm();
                            //adds cost of right arm to robot model total parts cost
                            generalModel.setComponentsCost(
                                    (generalModel.getComponentsCost() + generalModel.getRobotRightArmCost()));

                        }
                    }

                    if (desiredPartNum == 5) {
                        if (generalModel.getRobotTorsoActiveStatus() == 1) {
                            cout << "Error: you have created a torso already please try a new part\n";

                        } else {
                            generalModel.setRobotTorso();
                            generalModel.setComponentsCost(
                                    (generalModel.getComponentsCost() + generalModel.getRobotTorsoCost()));
                        }
                    }

                    if (desiredPartNum == 6) {
                        if (generalModel.getRobotTorsoActiveStatus() == 0) {
                            cout << "Error: you must created a torso before creating batteries\n";
                        } else {
                            if (generalModel.getRobotBatteryOneActiveStatus() == 1) {
                                cout
                                        << "Error: you have created the robot baatteries already please add a different part\n";
                            } else {
                                generalModel.setRobotBattery(generalModel.getRobotTorsoMaxBatteries());
                                //add cost of batteries to robot model total parts cost
                                generalModel.setComponentsCost(
                                        (generalModel.getComponentsCost() + generalModel.getBatteriesPrice()));
                            }
                        }
                    }

                    if (desiredPartNum == 0) {
                        robotStore.addRobotModel(generalModel);
                        break;
                    }

                } while (true);
            }

            if(createMenuResponse == 2)
            {
                newCustomer = Customer::customerCreator();
                robotStore.addCustomer(newCustomer);

            }

            if(createMenuResponse == 3)
            {
                newSalesAssociate = SalesAssociate::salesAssociateCreator();
                robotStore.addSaleAssociate(newSalesAssociate);
            }

            if(createMenuResponse == 4)
            {
                newOrder = Order::orderCreator();
                robotStore.addOrder(newOrder);
            }

        }

        if (mainMenuResponse == 2)
        {
            do {
                viewMenuResponse = robotStore.viewMenuMessage();

                if( viewMenuResponse == 0)
                {
                    break;
                }
                if(viewMenuResponse == 1)
                {
                    robotStore.displayAllRobotModelsInfo();
                }
            }while(true);
        }

    } while(true);
    return 0;
}