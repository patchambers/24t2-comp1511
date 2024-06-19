// largest_character exercise from tutorial
// Write a program to: 
//     Create a character array with exactly 8 elements.
//     Create a character variable called largest_character, equal to the first character of the array.
//     Create a while loop to loop through the character array.
//     Create an if statement to check if the current character has a higher ascii value than "largest_character"
//     Print out the largest character you've found.
// 
// Pat Chambers (z5264081), 19/6/24

#include <stdio.h>

#define SIZE 8

int main(void) {

    char chars[SIZE] = {'c', 'd', 'e', 'f', 'g', 'a', 'b', 'c'};

    char largest_char = chars[0];
    int i = 1;
    while (i < SIZE) {
        if (chars[i] > largest_char) {
            largest_char = chars[i];
        }
        i++;
    }
    printf("Largest character: %c\n", largest_char);

    return 0;
}