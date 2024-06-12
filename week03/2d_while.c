// Demonstrate a basic 2D while loop
// Patrick Chambers (z5264081) 

#include <stdio.h>

#define MAX_ROW 4
#define MAX_COL 4

int main(void) {

    int row = 0;
    while (row < MAX_ROW) {

        int col = 0;
        while (col < MAX_COL) {

            if (col == 3) {
                printf("X ");
            } else {
                printf("%d ", col);
            }
            col++;
        }
        printf("\n");

        row++;
    }
    


    return 0;
}