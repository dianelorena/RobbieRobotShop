//
// Created by Juan Duarte on 10/19/16.
//

#include "Order.h"

#include<string>


using namespace std;

Order::Order()
{

};

void Order::addRobotToOrder (RobotModel newRobot)
{
    robotsOrder.push_back(newRobot);
}

void Order::setOrderNum(int newOrderNum)
{
    orderNum = newOrderNum;
}
int Order::getOrderNum()
{
    return orderNum;
}

void Order::setDateOfSale(int newDate)
{
    dateOfSale = newDate;
}
int Order::getDateOfSale()
{
    return dateOfSale;
}

void Order::setCustomerName(string name)
{
    customerName = name;
}
string Order::getCustomerName()
{
    return customerName;
}

void Order::setTotalOrderPrice(double price)
{
    totalOrderPrice = price;
}
double Order::getTotalOrderPrice()
{
    return totalOrderPrice;
}

void Order::setSubTotalPrice(double price)
{
    subTotalPrice = price;
}
double Order::getSubTotalPrice()
{
    return subTotalPrice;
}

void Order::setShippingPrice(double price)
{
    shippingPrice = price;
}
double Order::getShippingPrice()
{
    return shippingPrice;
}

void Order::setTaxPrice(double price)
{
    taxPrice = price;
}
double Order::getTaxPrice()
{
    return taxPrice;
}

Order Order::orderCreator()
{
    char tempCharArray[200];
    string tempString;
    int tempNum = 0;
    double tempDouble;
    Order newOrder;


    //inputting order num
    do {
        if (tempNum < 0) {
            cout << "error: order number enter is negative please try again\n";
        }
        cout << "Please enter order num: \n";
        cin >> tempNum;

    } while (tempNum < 0);
    newOrder.setOrderNum(tempNum);

    //inputting date of sale
        cout << "Please enter order date: \n";
        cin >> tempNum;
    newOrder.setDateOfSale(tempNum);

    //inputting customer name
    cout << "Please enter customer name for this order: \n";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(tempCharArray, sizeof(tempCharArray));
    tempString = string(tempCharArray);
    newOrder.setCustomerName(tempString);



    cout << "Sales Associate Added Successfully\n\n";

    return newOrder;
}
