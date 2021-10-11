// Ball.cpp contains definition of functions for Ball creation, calculating and output

#include "Ball.h"


// Read parameters from file
void read(Ball& ball, FILE* file) {
    fscanf(file, "%d", &ball.radius);
}

// Randomize parameters
void randomize(Ball& ball) {
    ball.radius = getRandomIntFromOneToTen();
}

// Output parameters in file
void output(Ball& ball, FILE* file) {
    fprintf(file,
            "Ball.                       r = %d.               Volume = %f.",
            ball.radius,
            calculateVolume(ball));
}

// Calculate volume
double calculateVolume(Ball& ball) {
    return M_PI * 4 / 3 * pow(ball.radius, 3);
}