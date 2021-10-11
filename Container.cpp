// Container.cpp contains definition of functions for Container creation, calculating and output

#include "Container.h"


// Initialization
void initialize(Container& container) {
    container.length = 0;
}

// Freeing memory
void clear(Container& container) {
    for (int i = 0; i < container.length; ++i) {
        delete container.shapes[i];
    }
    container.length = 0;
}

// Read parameters from file for all shapes
void read(Container& container, FILE* file) {
    int length;
    fscanf(file, "%d", &length);
    for (int i = 0; i < length; ++i) {
        if ((container.shapes[container.length] = read(file)) != nullptr) {
            container.length++;
        }
    }
}

// Randomize parameters for all shapes
void randomize(Container& container, int length) {
    for (int i = 0; i < length; ++i) {
        if ((container.shapes[container.length] = randomize()) != nullptr) {
            container.length++;
        }
    }
}

// Output parameters in file for all shapes
void output(Container& container, FILE* file, char* message) {
    fprintf(file, message, container.length);
    for (int i = 0; i < container.length; ++i) {
        output(*(container.shapes[i]), file);
    }
}

// Calculate volume sum for all shapes
double calculateAverageVolume(Container& container) {
    double sum = 0.0;
    for (int i = 0; i < container.length; ++i) {
        sum += calculateVolume(*(container.shapes[i]));
    }
    return sum / container.length;
}

// Sorting depending on volume
void sort(Container& container) {
    double averageVolume = calculateAverageVolume(container);
    Container container_sorted;
    initialize(container_sorted);
    for (int i = 0; i < container.length; ++i) {
        if (calculateVolume(*(container.shapes[i])) > averageVolume) {
            if ((container_sorted.shapes[container_sorted.length] = container.shapes[i]) != nullptr) {
                container_sorted.length++;
                container.shapes[i] = nullptr;
            }
        }
    }
    for (int i = 0; i < container.length; ++i) {
        if (container.shapes[i] != nullptr) {
            if ((container_sorted.shapes[container_sorted.length] = container.shapes[i]) != nullptr) {
                container_sorted.length++;
                container.shapes[i] = nullptr;
            }
        }
    }
    container = container_sorted;
}