// Parallelepiped.cpp contains definition of functions for Parallelepiped creation, calculating and output

#include "Parallelepiped.h"


// Read parameters from file
void read(Parallelepiped& parallelepiped, FILE* file) {
    fscanf(file, "%d", &parallelepiped.edgeA);
    fscanf(file, "%d", &parallelepiped.edgeB);
    fscanf(file, "%d", &parallelepiped.edgeC);
}

// Randomize parameters
void randomize(Parallelepiped& parallelepiped) {
    parallelepiped.edgeA = getRandomIntFromOneToTen();
    parallelepiped.edgeB = getRandomIntFromOneToTen();
    parallelepiped.edgeC = getRandomIntFromOneToTen();
}

// Output parameters in file
void output(Parallelepiped& parallelepiped, FILE* file) {
    fprintf(file,
            "Rectangular parallelepiped. a = %d, b = %d, c = %d. Volume = %f.",
            parallelepiped.edgeA,
            parallelepiped.edgeB,
            parallelepiped.edgeC,
            calculateVolume(parallelepiped));
}

// Calculate volume
double calculateVolume(Parallelepiped& parallelepiped) {
    return parallelepiped.edgeA * parallelepiped.edgeB * parallelepiped.edgeC;
}