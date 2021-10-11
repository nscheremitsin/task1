#ifndef TASK1_PARALLELEPIPED_H
#define TASK1_PARALLELEPIPED_H

// Parallelepiped.h contains Parallelepiped description

#include <cstdio>
#include <cmath>
#include "random.h"

using namespace std;


struct Parallelepiped {
    int edgeA, edgeB, edgeC;
};

// Read parameters from file
void read(Parallelepiped& parallelepiped, FILE* file);

// Randomize parameters
void randomize(Parallelepiped& parallelepiped);

// Output parameters in file
void output(Parallelepiped& parallelepiped, FILE* file);

// Calculate volume
double calculateVolume(Parallelepiped& parallelepiped);


#endif //TASK1_PARALLELEPIPED_H
