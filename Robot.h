#pragma once
#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
private:
    std::string location;
    bool isMoving;
    int batteryLevel;

public:
    Robot();
    Robot(std::string initialLocation, int initialBatteryLevel);

    void moveDelivery(std::string destination);
    void returnToBase();

    std::string getLocation();
    bool getIsMoving();
    int getBatteryLevel();
    void setBatteryLevel(int level);
};
#endif