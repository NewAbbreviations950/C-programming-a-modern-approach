/*
 * Is the following if statement legal?
 * If so what does it do when n is equal to 5?
 */

#include <stdio.h>

int n = 5;

int main()
{
    if (n == 1 - 10)
    printf("n is between 1 and 10\n");

    return 0;
}

// the statement is legal but returns nothing as 5 is not equal to -9
