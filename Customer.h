//
// Created by Diane Lorena on 10/6/16.
//


#ifndef HOMEWORKFIVE_SHOP_H
#define HOMEWORKFIVE_SHOP_H

using namespace std;

class Customer
{
private:
    string name;
    int customerId;
    int totalCustomerCount = 0;
    double outstandingBill;
    //std::vector<order> totalOrders;

public:

    Customer();

    void addCustomer(Customer);
    string getName();
    void setName(string);
    int getCustomerId();
    void setCustomerId(int);
    double getOutstandingBill();
    void setOutstandingBill(double);
    //void addOrder(order);
    //void browseRobotModels();
};

#endif //HOMEWORKFIVE_SHOP_H
