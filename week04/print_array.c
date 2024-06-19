// Basic program to print an array of integers
// Pat Chambers (z5264081), 19/6/24

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {2, 4, 6, 8, 10};

    int i = 0;
    while (i < SIZE) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    return 0;
}