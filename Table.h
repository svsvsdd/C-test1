#pragma once
#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <vector>

class Table {
private:
    int tableNumber;
    std::string location;
    std::vector<std::string> orderInfo;

public:
    Table();
    Table(int number, std::string tableLocation);

    int getTableNumber();
    std::string getLocation();
    void setLocation(std::string newLocation);
    void addOrder(std::string order);
    void clearOrders();
    std::vector<std::string> getOrderInfo();
};

#endif
