// Demonstrate a basic while loop to print numbers
// Patrick Chambers (z5264081) 

#include <stdio.h>

#define MAX 10

int main(void) {

    int i = 0;
    while (i < MAX) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}