#ifndef VM_H
#define VM_H

class VendingMachine {
private:
    int total_drink;
    int now_money;
    int total_money; // 총 수익
public:
    VendingMachine() {
        total_drink = 0;
        now_money = 0;
        total_money = 0;
    }
    int showTotalMoney() {
        return total_money;
    }
    int showTotalDrink() {
        return total_drink;
    }
};

#endif