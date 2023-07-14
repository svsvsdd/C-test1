#pragma once
#ifndef MENU_H
#define MENU_H

#include <string>
#include <unordered_map>

class Menu {
private:
    std::unordered_map<std::string, int> foodQuantity;
    std::unordered_map<std::string, double> foodPrice;
    double totalOrderAmount;

public:
    Menu();

    void addFood(std::string foodName, int quantity, double price);
    void updateFoodQuantity(std::string foodName, int quantity);
    void updateFoodPrice(std::string foodName, double price);

    int getFoodQuantity(std::string foodName);
    double getFoodPrice(std::string foodName);
    double getTotalOrderAmount();
};

#endif
