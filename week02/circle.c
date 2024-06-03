// Calculates the area of a circle with the radius a user inputs
// Pat Chambers (z5264081), 3/6/24

#include <stdio.h>

#define PI 3.14159265

int main(void) {


    // Declare variable for radius
    double radius;
    // double radius = 42;

    printf("Please enter the radius of the circle\n");
    // Scan in radius from user
    scanf("%lf", &radius);

    // Calculate area of circle
    double area = PI * radius * radius;

    // Print out radius and area
    printf("The area of a circle with radius %lf is %lf\n", radius, area);

    return 0;
}