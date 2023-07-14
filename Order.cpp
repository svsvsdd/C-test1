#include "Order.h"

Order::Order() {
    tableNumber = 0;
    quantity = 0;
    foodName = "";
    orderTime = "";
}

Order::Order(int tableNum, std::string food, int qty, std::string time) {
    tableNumber = tableNum;
    foodName = food;
    quantity = qty;
    orderTime = time;
}

int Order::getTableNumber() {
    return tableNumber;
}

std::string Order::getFoodName() {
    return foodName;
}

int Order::getQuantity() {
    return quantity;
}

std::string Order::getOrderTime() {
    return orderTime;
}
