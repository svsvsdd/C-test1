#include "Menu.h"

Menu::Menu() {
    totalOrderAmount = 0.0;
}

void Menu::addFood(std::string foodName, int quantity, double price) {
    foodQuantity[foodName] = quantity;
    foodPrice[foodName] = price;
}

void Menu::updateFoodQuantity(std::string foodName, int quantity) {
    foodQuantity[foodName] = quantity;
}

void Menu::updateFoodPrice(std::string foodName, double price) {
    foodPrice[foodName] = price;
}

int Menu::getFoodQuantity(std::string foodName) {
    return foodQuantity[foodName];
}

double Menu::getFoodPrice(std::string foodName) {
    return foodPrice[foodName];
}

double Menu::getTotalOrderAmount() {
    return totalOrderAmount;
}
