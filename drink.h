#ifndef DRINK_H
#define DRINK_H
#include <cstring>


class Drink {
private:
    char * name;
    int price;
    int stock;
    char temper[5]{};
public:
    Drink(char * drink_name, int drink_price, char * drink_temper) {
        name = new char[strlen(drink_name) + 1];
        strcpy(name, drink_name);
        price = drink_price;
        stock = 10;
        strcpy(temper, drink_temper);
    }

    void sellDrink(int num) {
        stock -= num;
    }

    void fillDrink(int num) {
        stock += num;
    }

    char * showName() {
        return name;
    }

    int showPrice() {
        return price;
    }

    char * showTemper()
    {
        return temper;
    }

    char showStock()
    {
        if (stock <= 0)
            return 'X';
        else
            return ' ';
    }
};


#endif

