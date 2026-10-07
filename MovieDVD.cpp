//
// Created by Ольга on 07.10.2026.
//

#include "MovieDVD.h"

MovieDVD::MovieDVD() {
    genre = "undefined";
}

MovieDVD::MovieDVD(string n, string a, int year, float price,int duration, string genre)
    :MusicCD(n,a,year,price,duration)
{
    this->genre = genre;
}

float MovieDVD::getPrice() const {
    if (genre == "comedy") {
        return price*0,9;
    }
    else if (genre == "drama") {
        return price*0,85;
    }
    else if (genre == "serial") {
        return price * 0,8;
    }
    else {
        return price;
    }
}

void MovieDVD::show() const {
    cout << "\t MovieDvd \n";
    Item::show();
    cout << "duration: " << duration;
    cout << "genre: " << genre;
    cout << "full price: " << getPrice() << endl;
}
