#include "Robot.h"

Robot::Robot() {
    location = "";
    isMoving = false;
    batteryLevel = 100;
}

Robot::Robot(std::string initialLocation, int initialBatteryLevel) {
    location = initialLocation;
    isMoving = false;
    batteryLevel = initialBatteryLevel;
}

void Robot::moveDelivery(std::string destination) {
    // 로봇의 배송 이동 구현
    isMoving = true;
    location = destination;
    // 배터리 소모 등 추가 구현
}

void Robot::returnToBase() {
    // 로봇의 복귀 구현
    isMoving = true;
    location = "Base";
    // 배터리 소모 등 추가 구현
}

std::string Robot::getLocation() {
    return location;
}

bool Robot::getIsMoving() {
    return isMoving;
}

int Robot::getBatteryLevel() {
    return batteryLevel;
}

void Robot::setBatteryLevel(int level) {
    batteryLevel = level;
}