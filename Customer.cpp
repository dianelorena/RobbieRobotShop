//
// Created by Diane Lorena on 10/6/16.
//

#include<string>
#include <vector>
#include "Customer.h"


using namespace std;

Customer::Customer()
{

}

string Customer::getName()
{
    return name;

}

void Customer::setName(string customerName)
{
    name = customerName;
}

int Customer::getCustomerId()
{
    return customerId;
}

void Customer::setCustomerId(int customerID)
{
    customerId = customerID;
}

double Customer::getOutstandingBill()
{
    return outstandingBill;
}

void Customer::setOutstandingBill(double outstandingBillNum)
{
    outstandingBill = outstandingBillNum;
}



/*void Customer::addOrder(order newOrder)
{
    totalOrders.push_back(newOrder);

}*/

//    void browseRobotModels();
