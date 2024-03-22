#include <iostream>
#include <cstdlib>
#include <ctime>
int ran() {
    srand((unsigned int)time(NULL));
    return rand()%1000;
}