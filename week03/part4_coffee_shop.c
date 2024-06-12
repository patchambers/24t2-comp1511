// coffee_shop.c
//
// Pat Chambers (z5264081), 12/6/24
//
// This program is a simple coffee shop used to demonstrate the use of 
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// Define an enum `coffee_type` that stores the different types of coffees 
// the shop sells. These are: LATTEE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.
enum coffee_type {
    LATTE, 
    CAPPUCCINO, 
    ESPRESSO, 
    AMERICANO, 
    MATCHA
};

// Define a struct `coffee` that stores 
// 1. the coffee type (an enum)
// 2. the number of sugars 
// 3. the size of a coffee 
struct coffee {
    enum coffee_type type;
    int sugars;
    char size;
};


int main(void) {
    // Demonstrate declaring a struct coffee and initialising its values
    struct coffee my_coffee;
    my_coffee.type = LATTE;
    my_coffee.sugars = 5;
    my_coffee.size = LARGE;

    printf("My coffee contains %d sugars\n", my_coffee.sugars);


    // The rest of this program is incomplete :)

    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, "
            "3: AMERICANO, 4: MATCHA): ");
    
    // TODO: take user input

    printf("Enter number of sugars: ");
    // TODO: take user input

    printf("Enter size (L for Large, R for Regular): ");
    // TODO: take user input

    // TODO: Calculate cost of order
    double total_cost = 0.0;
	printf("Total cost: %.2lf\n", total_cost);
	return 0;
}
