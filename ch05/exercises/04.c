/*
 * Write a single expression whose value is either -1, 0, or +1,
 * depending on whether i is less than, equal to, or greater than j,
 * respectively.
 */

#include <stdio.h>

int i; int j;

int main()
{
    i = 1; j = 1;
    printf("%d\n", (i >= j) - (i <= j) ); // 0
    
    i = 2; j = 1;
    printf("%d\n", (i >= j) - (i <= j) ); // 1
    
    i = 1; j = 2;
    printf("%d\n", (i >= j) - (i <= j) ); // -1

    return 0;
}
