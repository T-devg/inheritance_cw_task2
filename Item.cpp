//
// Created by Ольга on 07.10.2026.
//

#include "Item.h"

Item::Item() {
    name = "undefined";
    author = "undefined";
    year = 0;
    price = 0;
}

Item::Item(string n, string a, int year, float price) {
    name = n;
    author =a;
    this->year = year;
    this->price = price;
}

void Item::setName(string name) {
    this->name = name;
}

string Item::getName() const {
    return name;
}

float Item::getPrice() const {
    return price;
}

void Item::show() const {
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
}
