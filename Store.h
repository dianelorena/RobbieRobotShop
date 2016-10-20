//
// Created by Diane Lorena on 10/6/16.
//

#include<string>
#include <vector>
#include <iostream>

#ifndef HOMEWORKFIVE_STORE_H
#define HOMEWORKFIVE_STORE_H

#include "Customer.h"
#include "RobotModel.h"
#include "SalesAssociate.h"
#include "Order.h"

using namespace std;

class Store
{
private:
    static std::vector<RobotModel> robotModelsLibrary;
    static std::vector<Order> allOrders;
    static std::vector<Customer> allCustomers;
    static std::vector<SalesAssociate> allSaleAssociates;
    static std::vector<int> allPartNums;
    static std::vector<int> allRobotModelNums;
    int mainMenuResponse;
    int createMenuResponse;
    int robotPartPicker;
    int viewMenuResponse;

public:
    Store();
    int mainMenuMessage();
    int createMenuMessage();
    int robotPartPickerMessage();
    int viewMenuMessage();
    void displayAllRobotModelsInfo();

////////////////////ALL ORDERS//////////////////////////////////////////
static void addOrder (Order newOrder)
{
    Store::allOrders.push_back(newOrder);
}

static void getOrderInfo (int orderNum)
{
    int i = 0;

    while(i < Store::allOrders.size())
    {
        if(Store::allOrders[i].getOrderNum() == orderNum)
        {
            cout << "Order Num : " << allOrders[i].getOrderNum() << "\n";
            cout << "Order Name : " << allOrders[i].getCustomerName() << "\n";
            cout << "Order date of sale : " << allOrders[i].getDateOfSale() << "\n";
            cout << "Order Total Price: " << allOrders[i].getTotalOrderPrice() << "\n";
            cout << "Order Shipping Price : " << allOrders[i].getShippingPrice() << "\n";
            cout << "Order Tax price : " << allOrders[i].getTaxPrice() << "\n";
            break;
        }
        i++;
    }

}

/////////////////////ROBOT MODELS IN GENERAL////////////////////////////
static void addRobotModel (RobotModel newRobotModel)
    {
        Store::robotModelsLibrary.push_back(newRobotModel);
    };

static RobotModel searchRobotModel(int robotModelNum)
{
    int size = Store::robotModelsLibrary.size();
    int i = 0;

    while(i < size)
    {
        if(Store::robotModelsLibrary[i].getModelNum() == robotModelNum)
        {
            return Store::robotModelsLibrary[i];
        }
        i++;
    }
    return Store::robotModelsLibrary[0];
}

/////////////////////////////ROBOT MODEL NUMS///////////////////////////

    static int checkForRobotModelDuplicates(int newRobotModelNum)
    {
        int i = 0;

        while( i < Store::allRobotModelNums.size())
        {
            if(Store::allRobotModelNums[i] == newRobotModelNum)
            {
                return 1;
            }
            i++;
        }

        return 0;
    };

    static void addRobotModelNum(int newRobotModelNum)
    {
        Store::allRobotModelNums.push_back(newRobotModelNum);
    };




/////////////////////ROBOT PART NUMS///////////////////////////
static void addPartNum(int newPartNum)
{
   Store::allPartNums.push_back(newPartNum);
};

static int checkForDuplicates(int newPartNum)
{
    int i = 0;

    while( i < Store::allPartNums.size())
    {
        if(Store::allPartNums[i] == newPartNum)
        {
            return 1;
        }
        i++;
    }

    return 0;
};

///////////////////CUSTOMERS///////////////////////////
static void addCustomer (Customer newCustomer)
{
    Store::allCustomers.push_back(newCustomer);
};

static Customer searchForCustomer(int customerNum)
{
    int i = 0;

    while(i < Store::allCustomers.size())
    {
        if(Store::allCustomers[i].getCustomerId() == customerNum)
        {
            return Store::allCustomers[i];
        }
        i++;
    }
    return Store::allCustomers[0];
}

///////////////////SALES ASSOCIATE///////////////////////////
static void addSaleAssociate (SalesAssociate newAssociate)
{
    Store::allSaleAssociates.push_back(newAssociate);
};




};




#endif //HOMEWORKFIVE_STORE_H*/
