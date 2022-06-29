#include <iostream>
#include "vm.h"
#include "drink.h"
using namespace std;

VendingMachine vendingMachine;
Drink d1("사이다", 1000, "cold"), d2("콜라", 1000, "cold"), d3("커피", 800, "hot");

void printVM();

void selDrink(int sel, int money);

int main() {
    int money = 0;
    bool loop = true;
    int sel, temp;
    while (loop) {
        printVM();
        cin >> sel;
        switch (sel) {
            case 1:
                cout << "충전할 금액 입력\n>>> ";
                cin >> temp;
        }
        selDrink(sel, money);
        loop = false;
    }

    return 0;
}

void selDrink(int sel, int money) {
    if (sel == 1) {
        if (money < d1.getPrice()) {
            cout << "금액 불충분" << endl << endl;
            return;
        }
        d1.sellDrink();
        cout << "success" << endl;
    }
}

void printVM() {
    cout << d1.getName() << "\t" << d2.getName() << "\t" << d3.getName() << endl;
    cout << d1.getPrice() << "\t" << d2.getPrice() << "\t" << d3.getPrice() << endl;
    cout << d1.getTemper() << "\t" << d2.getTemper() << "\t" << d3.getTemper() << endl;
    cout << "( " << d1.getStock() << " )\t( " << d2.getStock() << " )\t( " << d3.getStock() << " )" << endl << endl;
    cout << "(1) 금액 충전\n(2) 음료 선택\n(3) 종료하기\n>>> ";
}
