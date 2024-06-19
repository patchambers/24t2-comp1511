// functions.c
//
// Pat Chambers (z5264081), 19/6/24
//
// This program is a simple demonstration of functions

#include <stdio.h>

int my_add(int num1, int num2);

int main(void) {
    int a = 5;
    int b = 3;

    int result = my_add(a, b);

    printf("Result: %d\n", result);

    // The function could also be called inside the printf itself
    printf("Result: %d\n", my_add(b, 56));
    return 0;
}

// Adds 2 integers and returns the result
int my_add(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

