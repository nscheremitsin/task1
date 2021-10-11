// Shape.cpp contains definition of functions for Shape creation, calculating and output

#include "Shape.h"


// Read parameters from file for generic shape
Shape* read(FILE* file) {
    int key;
    fscanf(file, "%d", &key);
    double density;
    switch (key) {
        case 1:
        case 2:
        case 3:
            fscanf(file, "%lf", &density);
            break;
        default:
            density = 0.0;
            break;
    }
    Shape* shape;
    switch (key) {
        case 1:
            shape = new Shape;
            shape->density = density;
            shape->key = Shape::BALL;
            read(shape->ball, file);
            return shape;
        case 2:
            shape = new Shape;
            shape->density = density;
            shape->key = Shape::TETRAHEDRON;
            read(shape->tetrahedron, file);
            return shape;
        case 3:
            shape = new Shape;
            shape->density = density;
            shape->key = Shape::PARALLELEPIPED;
            read(shape->parallelepiped, file);
            return shape;
        default:
            return nullptr;
    }
}

// Randomize parameters for generic shape
Shape* randomize() {
    int key = rand() % 3 + 1;
    double density = getRandomIntFromOneToTen() % 10
                    + getRandomIntFromOneToTen() % 10 / 10.0
                    + getRandomIntFromOneToTen() % 100 / 100.0
                    + getRandomIntFromOneToTen() % 1000 / 1000.0;
    Shape* shape;
    switch (key) {
        case 1:
            shape = new Shape;
            shape->density = density;
            shape->key = Shape::BALL;
            randomize(shape->ball);
            return shape;
        case 2:
            shape = new Shape;
            shape->density = density;
            shape->key = Shape::TETRAHEDRON;
            randomize(shape->tetrahedron);
            return shape;
        case 3:
            shape = new Shape;
            shape->density = density;
            shape->key = Shape::PARALLELEPIPED;
            randomize(shape->parallelepiped);
            return shape;
        default:
            return nullptr;
    }
}

// Output parameters in file for generic shape
void output(Shape& shape, FILE* file) {
    switch (shape.key) {
        case Shape::BALL:
            output(shape.ball, file);
            break;
        case Shape::TETRAHEDRON:
            output(shape.tetrahedron, file);
            break;
        case Shape::PARALLELEPIPED:
            output(shape.parallelepiped, file);
            break;
        default:
            fprintf(file, "Incorrect shape!\n");
    }
    switch (shape.key) {
        case Shape::BALL:
        case Shape::TETRAHEDRON:
        case Shape::PARALLELEPIPED:
            fprintf(file, "\tDensity = %f.\n", shape.density);
            break;
        default:
            break;
    }
}

// Calculate volume for generic shape
double calculateVolume(Shape& shape) {
    switch (shape.key) {
        case Shape::BALL:
            return calculateVolume(shape.ball);
        case Shape::TETRAHEDRON:
            return calculateVolume(shape.tetrahedron);
        case Shape::PARALLELEPIPED:
            return calculateVolume(shape.parallelepiped);
        default:
            return 0.0;
    }
}