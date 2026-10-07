//
// Created by Ольга on 07.10.2026.
//

#ifndef INHERITANCE_CW_TASK2_MUSICCD_H
#define INHERITANCE_CW_TASK2_MUSICCD_H

#include "Item.h"
class MusicCD:public Item {
protected:
    int duration;
public:
    MusicCD();
    MusicCD(string n, string a, int year, float price,int duration);
    void setDuration(int duration);
    int getDuration() const;
    void show()const;
};



#endif //INHERITANCE_CW_TASK2_MUSICCD_H
