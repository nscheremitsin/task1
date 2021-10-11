// Tetrahedron.cpp contains definition of functions for Tetrahedron creation, calculating and output

#include "Tetrahedron.h"


// Read parameters from file
void read(Tetrahedron& tetrahedron, FILE* file) {
    fscanf(file, "%d", &tetrahedron.edge);
}

// Randomize parameters
void randomize(Tetrahedron& tetrahedron) {
    tetrahedron.edge = getRandomIntFromOneToTen();
}

// Output parameters in file
void output(Tetrahedron& tetrahedron, FILE* file) {
    fprintf(file,
            "Regular tetrahedron.        a = %d.               Volume = %f.",
            tetrahedron.edge,
            calculateVolume(tetrahedron));
}

// Calculate volume
double calculateVolume(Tetrahedron& tetrahedron) {
    return pow(tetrahedron.edge, 3) * sqrt(2) / 12;
}