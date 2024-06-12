// Demonstrate use of scanf in loops
// Pat Chambers (z5264081), 12/6/24


#include <stdio.h>

int main(void) {

    // What does scanf return?
    // It returns the number of values scanned in correctly

    // This code demonstrates scanf returning different values (try scanning 
    // non-integer values or pressing `ctrl-d`)
    //
    // int input = -42;
    // int input2 = -43;
    // int result = scanf("%d %d", &input, &input2);
    // printf("result: %d\n", result);
    
    int input;
    int result = scanf("%d", &input);
    // If input is scanned correctly, enter the while loop
    while (result == 1) {
        printf("Input: %d\n", input);

        result = scanf("%d", &input);
    } 

    // TUTORIAL EXERCISES

    // A: Enter a series of integers until you reach a negative number. Then, stop 
    // and calculate the sum.

    // B: Enter characters until the user presses 'q'. Then, display the count of 
    // characters entered.
    
    // C: Scan for numbers until end of input and display all even numbers entered.

    // D: Scan for integers keeping a cumulative sum, until the sum of entered 
    // integers reaches or exceeds the target sum provided by the user. Print the 
    // final sum.

    return 0;
}