//
// Created by Juan Duarte on 10/19/16.
//
#include <iostream>

#include "RobotModel.h"

#ifndef HOMEWORKFIVE_ORDER_H
#define HOMEWORKFIVE_ORDER_H

using namespace std;

class Order
{
private:
    int orderNum;
    int dateOfSale;
    string customerName;
    std::vector<RobotModel> robotsOrder;
    double totalOrderPrice;
    double subTotalPrice;
    double shippingPrice;
    double taxPrice;


    //std::vector<order> totalOrders;

public:

    Order();

    void addRobotToOrder(RobotModel newRobot);

    static Order orderCreator();

    void setOrderNum(int);
    int getOrderNum();

    void setDateOfSale(int);
    int getDateOfSale();

    void setCustomerName(string);
    string getCustomerName();

    void setTotalOrderPrice(double);
    double getTotalOrderPrice();

    void setSubTotalPrice(double);
    double getSubTotalPrice();

    void setShippingPrice(double);
    double getShippingPrice();

    void setTaxPrice(double);
    double getTaxPrice();




};

#endif //HOMEWORKFIVE_ORDER_H
