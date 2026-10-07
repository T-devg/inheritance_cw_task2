#include <iostream>
using namespace std;
#include "MusicCD.h"
#include "MovieDVD.h"
int main() {
    MusicCD a("Cochise", "Audioslave", 2005, 30, 3);
    a.show();

    MovieDVD b("Titanic", "-",2000,100,240,"drama");
    b.show();
    return 0;
}