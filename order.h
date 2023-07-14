#pragma once
#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>

class Order {
private:
    int tableNumber;
    std::string foodName;
    int quantity;
    std::string orderTime;

public:
    Order();
    Order(int tableNum, std::string food, int qty, std::string time);

    int getTableNumber();
    std::string getFoodName();
    int getQuantity();
    std::string getOrderTime();
};

#endif
