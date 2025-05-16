/******************************************************************************

Programming Project 1 in Chapter 4 asked you to write a program that displays a
two-digit number with its digits reversed. Generalize the program so that the
number can have one, two, three, or more digits. Hint: Use a do loop that
repeatedly divides the number by 10, stopping when it reaches 0.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int original_number, reversed_number = 0;
    
    printf("Enter a whole number: ");
    scanf("%d", &original_number);
    
    do {
        reversed_number = (reversed_number * 10) + (original_number % 10);
        original_number /= 10;
    }
    while (original_number != 0);
    
    printf("The reversal is: %d\n", reversed_number);
    
    return 0;
}
