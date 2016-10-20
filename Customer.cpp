//
// Created by Diane Lorena on 10/6/16.
//

#include<string>
#include <vector>
#include <iostream>
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

Customer Customer::customerCreator()
{
    char tempCharArray[200];
    string tempString;
    int tempNum = 0;
    double tempDouble;
    Customer newCustomer;


    //user inputs his information to create account
    cout << "Please Customer name: \n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray, sizeof(tempCharArray));
    tempString = string(tempCharArray);
    newCustomer.setName(tempString);

    //inputting customer ID
    do {
        if (tempNum < 0) {
            cout << "error: customer ID enter is negative please try again\n";
        }
        cout << "Please enter customer ID: \n";
        cin >> tempNum;

    } while (tempNum < 0);
    newCustomer.setCustomerId(tempNum);



    cout << "Customer Added Successfully\n\n";

    return newCustomer;
}

/*void Customer::addOrder(order newOrder)
{
    totalOrders.push_back(newOrder);

}*/

