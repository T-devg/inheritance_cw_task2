//
// Created by Ольга on 07.10.2026.
//

#include "MusicCD.h"
 MusicCD::MusicCD() {
  duration = 0;
}

 MusicCD::MusicCD(string n, string a, int year, float price, int duration):
Item(n,a,year,price)
{
  this->duration = duration;
}

 void MusicCD::setDuration(int duration) {
  this->duration = duration;
}

 int MusicCD::getDuration() const {
  return duration;
}

 void MusicCD::show() const {
  cout << "\t Music CD \n";
  Item::show();
  cout << "Duration: " << duration << endl << endl;
}