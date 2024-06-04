#include <stdio.h>

struct Car {
    int wheel_count;
    int gear_count;
    int model;
    float engine;
    int horsepower;
} car1 = {4, 6, 2011, 3.0, 242}, car2; // Initializing car1 during declaration

int main(void) {
	car2 = (struct Car){4, 6, 2008, 1.6, 112}; // Assigning values to car2 using a struct initializer
    printf("%d %d %d %.2f %d", car1.wheel_count, car1.gear_count, car1.model, car1.engine, car1.horsepower);
    printf("\n%d %d %d %.2f %d", car2.wheel_count, car2.gear_count, car2.model, car2.engine, car2.horsepower);
}
