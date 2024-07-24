/*
 *Show the output produced by each of the following program fragments.
 *Assume that i and j are int variables.
 */

#include <stdio.h>

int main(void)
{
    int i, j;
    
    // a 
    i = 5;
    j = ++i * 3 - 2;          // j = (6 * 3) - 2
    printf("%d %d\n", i, j);  // 6 16
    
    // b
    i = 5;
    j = 3 - 2 * i++;          // j = 3 - (2 * 5)
    printf("%d %d\n", i, j);  // 6 -7
    
    // c
    i = 7;
    j = 3 * i-- + 2;          // j = (3 * 7) + 2
    printf("%d %d\n", i, j);  // 6 23
    
    // d
    i = 7;
    j = 3 + --i * 2;          // j = 3 + (6 * 2)
    printf("%d %d\n", i, j);  // 6 15

    return 0;
}
