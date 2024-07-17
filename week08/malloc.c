// Using malloc and free to manually manage memory
// Pat Chambers (z5264081), 2/4/24

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

struct my_struct {
    int number;
    char letter;
    double another_number;
};

int main(void) {

    // malloc memory for int: 
    int *ptr = malloc(sizeof(int)); 
    *ptr = 42;
    printf("Here is my number: %d\n", *ptr);
    free(ptr);
    // This next line will cause a malloc use after free error
    // printf("Here is my number after freeing: %d\n", *ptr);


    // malloc memory for array of 10 chars:
    char *string = malloc(sizeof(char) * SIZE);
    // int *array = malloc(sizeof(int) * 50);
    
    // malloc memory for a `struct my_struct`:
    struct my_struct *first_struct = malloc(sizeof(struct my_struct));

    return 0;
}
