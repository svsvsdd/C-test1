#include "Table.h"

Table::Table() {
    tableNumber = 0;
    location = "";
}

Table::Table(int number, std::string tableLocation) {
    tableNumber = number;
    location = tableLocation;
}

int Table::getTableNumber() {
    return tableNumber;
}

std::string Table::getLocation() {
    return location;
}

void Table::setLocation(std::string newLocation) {
    location = newLocation;
}

void Table::addOrder(std::string order) {
    orderInfo.push_back(order);
}

void Table::clearOrders() {
    orderInfo.clear();
}

std::vector<std::string> Table::getOrderInfo() {
    return orderInfo;
}
