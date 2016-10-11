//
// Created by Diane Lorena on 10/6/16.
//
/*
#include "Store.h"

int customerId = 1;
using namespace std;

Store::Store()
{
    Store;
}

void createRobotModel()
{

}
void Store::createNewCustomer()
{
    char tempArray[100];
    string tempString;
    int tempNum;

    Customer newCustomer;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    //Save name
    cout << "Please enter your first name\n";
    std::cin.getline(tempArray,sizeof(tempArray));
    tempString = string(tempArray);
    newCustomer.setName(tempString);

    //Save customer ID
    newCustomer.setCustomerId(customerId);
    customerId += 1;

    //Add to list of total customers
    this->addNewCustomer(newCustomer);

}

void Store::addNewCustomer(Customer newPerson)
{
    totalCustomers.push_back(newPerson);

}
void placeOrder()
{

}
void runReports(Boss)
{

}

*/