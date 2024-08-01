/*
 * Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
 * form:
 *
 * Enter a 24-hour time: 21:11
 * Equivalent 12-hour time: 9:11 PM
 *
 * Be careful not to display 12:00 PM as 0:00.
 *
 */

#include <stdio.h>

int hour, minute;

int main()
{
    printf("Enter a 24-hour time in the format hh:mm; ");
    scanf("%d:%d", &hour, &minute);
    
    if (0 <= hour && hour < 12) {
        printf("The equivalent 12-hour time is: %d:%.2d AM\n", hour, minute);
    } else if (hour == 12){
        printf("The equivalent 12-hour time is: %d:%.2d PM\n", hour, minute);
    } else {
        printf("The equivalent 12-hour time is: %d:%.2d PM\n", hour - 12, minute);
    }

    return 0;
}
