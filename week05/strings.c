// Basic demonstration of strings
// Pat Chambers (z5264801), 24/6/24

#include <stdio.h>

#define MAX_SIZE 100

int main(void) {

    char string[MAX_SIZE] = "Hello World!";

    // Print string with loop (loop until you reach the null terminator)
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");

    // Print string with printf using %s
    printf("Printing with printf: %s\n", string);

    // Scan into string with fgets
    char input[MAX_SIZE];
    fgets(input, MAX_SIZE, stdin);

    // Print string using fputs
    fputs(input, stdout);

    return 0;
}