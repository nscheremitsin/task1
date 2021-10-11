#ifndef TASK1_SHAPE_H
#define TASK1_SHAPE_H

// Shape.h contains Shape description

#include "Ball.h"
#include "Tetrahedron.h"
#include "Parallelepiped.h"


struct Shape {
    // Keys for shapes
    enum Key {
        BALL = 1,
        TETRAHEDRON,
        PARALLELEPIPED
    };
    Key key;
    double density;
    union {
        Ball ball;
        Tetrahedron tetrahedron;
        Parallelepiped parallelepiped;
    };
};

// Read parameters from file for generic shape
Shape* read(FILE* file);

// Randomize parameters for generic shape
Shape* randomize();

// Output parameters in file for generic shape
void output(Shape& shape, FILE* file);

// Calculate volume for generic shape
double calculateVolume(Shape& shape);


#endif //TASK1_SHAPE_H
