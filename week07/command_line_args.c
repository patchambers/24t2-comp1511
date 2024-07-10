// Demonstrate command line arguments
// Pat Chambers (z5264081), 8/7/24

#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc: number of command line arguments
    // argv: array of command line arguments (array of strings)

    printf("Number of args: %d\n", argc);

    int i = 0;
    while (i < argc) {
        printf("Arg %d: %s\n", i, argv[i]);
        i++;
    }

    return 0;
}

