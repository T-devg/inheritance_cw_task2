//
// Created by Ольга on 07.10.2026.
//

#ifndef INHERITANCE_CW_TASK2_MOVIEDVD_H
#define INHERITANCE_CW_TASK2_MOVIEDVD_H
#include "MusicCD.h"


class MovieDVD:public MusicCD{
protected:
    string genre;
public:
    MovieDVD();
    MovieDVD(string n, string a, int year, float price,int duration,string genre);
    float getPrice() const;
    void show() const;
};


#endif //INHERITANCE_CW_TASK2_MOVIEDVD_H
