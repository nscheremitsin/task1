#ifndef TASK1_BALL_H
#define TASK1_BALL_H

// Ball.h contains Ball description

#include <cstdio>
#include <cmath>
#include "random.h"

using namespace std;


struct Ball {
    // Radius
    int radius;
};

// Read parameters from file
void read(Ball& ball, FILE* file);

// Randomize parameters
void randomize(Ball& ball);

// Output parameters in file
void output(Ball& ball, FILE* file);

// Calculate volume
double calculateVolume(Ball& ball);


#endif //TASK1_BALL_H
