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
    // �κ��� ��� �̵� ����
    isMoving = true;
    location = destination;
    // ���͸� �Ҹ� �� �߰� ����
}

void Robot::returnToBase() {
    // �κ��� ���� ����
    isMoving = true;
    location = "Base";
    // ���͸� �Ҹ� �� �߰� ����
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