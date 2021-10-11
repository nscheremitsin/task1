#ifndef TASK1_CONTAINER_H
#define TASK1_CONTAINER_H

// Container.h contains Container description

#include <cstring>
#include "Shape.h"


struct Container {
    enum {
        MAX_LENGTH = 10000
    };
    // Current length
    int length;
    Shape* shapes[MAX_LENGTH];
};

// Initialization
void initialize(Container& container);

// Freeing memory
void clear(Container& container);

// Read parameters from file for all shapes
void read(Container& container, FILE* file);

// Randomize parameters for all shapes
void randomize(Container& container, int length);

// Output parameters in file for all shapes
void output(Container& container, FILE* file, char* message);

// Calculate volume sum for all shapes
double calculateAverageVolume(Container& container);

// Sorting depending on volume
void sort(Container& container);

#endif //TASK1_CONTAINER_H
