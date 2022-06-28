#include <iostream>
#include "vm.h"
#include "drink.h"
using namespace std;

VendingMachine vendingMachine;
Drink d1("사이다", 1000, "cold"), d2("콜라", 1000, "cold"), d3("커피", 800, "hot");

void startVendingMachine();

void printVM();

void printSelect();

int main() {
    int money = 0;
    bool loop = true;
    while (loop) {
        printVM();
        printSelect();
        loop = false;
    }

    return 0;
}

void printSelect() {
    cout << "(1) 금액 충전\n(2) 음료 선택\n(3) 종료하기" << endl;
}


void printVM() {
    cout << d1.showName() << "\t" << d2.showName() << "\t\t" << d3.showName() << endl;
    cout << d1.showPrice() << "\t" << d2.showPrice() << "\t" << d3.showPrice() << endl;
    cout << d1.showTemper() << "\t" << d2.showTemper() << "\t" << d3.showTemper() << endl;
    cout << d1.showStock() << "\t" << d2.showStock() << "\t" << d3.showStock() << endl;
}
