#ifndef TASK1_RANDOM_H
#define TASK1_RANDOM_H

// random.h contains function for getting random int

#include <cstdlib>

// TODO: remove
//#include <iostream>
//using namespace std;


// Generates random int from 1 to 10
inline int getRandomIntFromOneToTen() {
    return rand() % 9 + 1;
}

#endif //TASK1_RANDOM_H
