//
// Created by Ольга on 07.10.2026.
//

#ifndef INHERITANCE_CW_TASK2_ITEM_H
#define INHERITANCE_CW_TASK2_ITEM_H
#include <iostream>
#include <string>
using namespace std;

class Item {
protected:
    string name;
    string author;
    int year;
    float price;
public:
    Item();
    Item(string n, string a, int year, float price);

    void setName(string name);
    string getName() const;
    float getPrice()const;
    void show() const;
};


#endif //INHERITANCE_CW_TASK2_ITEM_H
