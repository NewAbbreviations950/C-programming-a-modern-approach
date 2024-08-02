/*
 * Write a program that finds the largest and smallest of four integers entered by the user:
 *
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest : 10
 *
 * Use as few if statements as possible. Hint: Four if statements are sufficient.
 */

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, low1, low2, high1, high2, highest, lowest;
    
    printf("Enter four numbers with a space inbetween each: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
    
    high1 = i2;
    low1 = i1;
    high2 = i4;
    low2 = i3;
    highest = high2;
    lowest = low2;
    
    if (i1 > i2) {
        high1 = i1;
        low1 = i2;
    }
    
    if (i3 > i4) {
        high2 = i3;
        low2 = i4;
    }
        
    if (high1 > high2) {
        highest = high1;
    }
        
    if (low1 < low2) {
        lowest = low1;
    }

    printf("The highest number is: %d\n", highest);
    printf("The lowest number is: %d\n", lowest);

    return 0;
}
