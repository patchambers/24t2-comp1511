// part1_arrays.c, odd_only
//
// Pat Chambers (z5264081), 19/6/24
//
// This program adds 1 to any even element in an array and after prints 
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {

    // Initialise array
    int array[SIZE] = {1, 2, 3, 4, 5};

    // Loop through array and add 1 to even elements
    int i = 0;
    while (i < SIZE) {
        if (array[i] % 2 == 0) {
            array[i]++;
        }
        i++;
    }

    // Print array
    int j = 0;
    while (j < SIZE) {
        printf("%d ", array[j]);
        j++;
    }
    printf("\n");

    return 0;
}
