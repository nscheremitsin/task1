#ifndef TASK1_TETRAHEDRON_H
#define TASK1_TETRAHEDRON_H

// Tetrahedron.h contains Tetrahedron description

#include <cstdio>
#include <cmath>
#include "random.h"

using namespace std;


struct Tetrahedron {
    int edge;
};

// Read parameters from file
void read(Tetrahedron& tetrahedron, FILE* file);

// Randomize parameters
void randomize(Tetrahedron& tetrahedron);

// Output parameters in file
void output(Tetrahedron& tetrahedron, FILE* file);

// Calculate volume
double calculateVolume(Tetrahedron& tetrahedron);


#endif //TASK1_TETRAHEDRON_H
