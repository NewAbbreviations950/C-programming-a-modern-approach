/*
 * Give the values of i and j after each of the following expression statements has been
 * executed. (Assume that i has the value 1 initially and j has the value 2.)
 */

#include <stdio.h>

int main(void)
{
    int i, j;
    
    // a 
    i = 1, j = 2;
    i += j;
    printf("%d %d\n", i, j);  // 3 2
    
    // b
    i = 1, j = 2;
    i--;
    printf("%d\n", i);        // 0
    
    // c
    i = 1, j = 2;
    i * j / i;
    printf("%d %d\n", i, j);  // 1 2
    
    // d
    i = 1, j = 2;
    i % ++j;
    printf("%d %d\n", i, j);  // 1 3

    return 0;
}
