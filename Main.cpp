#include <iostream>
#include "Robot.h"
#include "Table.h"
#include "Menu.h"
#include "Order.h"

int Main() {
    // �κ� ���� �� �ʱ�ȭ
    Robot robot("Base", 100);

    // ���̺� ���� �� �ʱ�ȭ
    Table table1(1, "Table1");
    Table table2(2, "Table2");

    // �޴� ���� �� �ʱ�ȭ
    Menu menu;
    menu.addFood("Burger", 10, 8.99);
    menu.addFood("Pizza", 15, 12.99);
    menu.addFood("Salad", 20, 6.99);

    // �ֹ� ���� �� �߰�
    Order order1(1, "Burger", 2, "10:30");
    table1.addOrder(order1.getFoodName());
    Order order2(2, "Pizza", 1, "11:15");
    table2.addOrder(order2.getFoodName());

    // �κ� ���� �׽�Ʈ
    std::cout << "Robot Location: " << robot.getLocation() << std::endl;
    robot.moveDelivery(table1.getLocation());
    std::cout << "Robot Location: " << robot.getLocation() << std::endl;
    robot.moveDelivery(table2.getLocation());
    std::cout << "Robot Location: " << robot.getLocation() << std::endl;
    robot.returnToBase();
    std::cout << "Robot Location: " << robot.getLocation() << std::endl;

    // ���̺� �ֹ� ���� Ȯ��
    std::cout << "Table 1 Orders: ";
    std::vector<std::string> table1Orders = table1.getOrderInfo();
    for (const auto& order : table1Orders) {
        std::cout << order << " ";
    }
    std::cout << std::endl;

    std::cout << "Table 2 Orders: ";
    std::vector<std::string> table2Orders = table2.getOrderInfo();
    for (const auto& order : table2Orders) {
        std::cout << order << " ";
    }
    std::cout << std::endl;

    return 0;
}
