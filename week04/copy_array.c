// copy_array exercise from tutorial
// Write a program to: 
//    Create an array of doubles with 3 elements.
//    Create another double array of 10 elements; but every element initialised to 0.
//    Create a while loop which loops through every element of the first array.
//    Copy the elements of the first array into the second array (leave 0's at the end)
//    Create a while loop which prints out all the elements of the second array.
// 
// Pat Chambers (z5264081), 19/6/24

#include <stdio.h>

#define SIZE_1 3
#define SIZE_2 10

int main(void) {

    double array_1[SIZE_1] = {1.1, 2.2, 3.3};
    double array_2[SIZE_2] = {0.0};

    int i = 0;
    while (i < SIZE_1) {
        array_2[i] = array_1[i];
        i++;
    }

    int j = 0;
    while (j < SIZE_2) {
        printf("%lf\n", array_2[j]);
        j++;
    }

    return 0;
}