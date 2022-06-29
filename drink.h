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

    void sellDrink() {
        stock -= 1;
    }

    void fillDrink(int num) {
        stock += num;
    }

    char * getName() {
        return name;
    }

    int getPrice() {
        return price;
    }

    char * getTemper()
    {
        return temper;
    }

    char getStock()
    {
        if (stock <= 0)
            return 'X';
        else
            return ' ';
    }
};


#endif

