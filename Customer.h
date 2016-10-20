//
// Created by Diane Lorena on 10/6/16.
//
#include <iostream>

#ifndef HOMEWORKFIVE_SHOP_H
#define HOMEWORKFIVE_SHOP_H

using namespace std;

class Customer
{
private:
    string name;
    int customerId;
    double outstandingBill;
    //std::vector<order> totalOrders;

public:

    Customer();

    string getName();
    void setName(string);
    int getCustomerId();
    void setCustomerId(int);
    double getOutstandingBill();
    void setOutstandingBill(double);
    static Customer customerCreator();
    //void addOrder(order);
    //void browseRobotModels();
};

#endif //HOMEWORKFIVE_SHOP_H
