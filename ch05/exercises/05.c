/*
 * Is the following if statement legal?
 */

#include <stdio.h>

int n = 11;

int main()
{
    if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");

    return 0;
}

// the statement is legal but doesn't behave as expected as it is evaluated as
// (n >= 1) <= 10 which will always evaluate to true and return a 1 value
