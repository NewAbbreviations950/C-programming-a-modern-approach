/*
 * Here's a simplified version of the Beaufort scale, which is used to estimate wind force:
 *
 * Speed (knots)    Description
 * Less than 1      Calm
 * 1-3              Light air
 * 4-27             Breeze
 * 28-47            Gale
 * 48-63            Storm
 * Above 63         Hurricane
 *
 * Write a program that asks the user to enter a wind speed (in knots), then displays the
 * corresponding description.
 */

#include <stdio.h>

int main(void)
{
    int wind_speed;

    printf("Enter the wind speed in knots: ");
    scanf("%d", &wind_speed);
    
    if (wind_speed <= 1)
        printf("It is calm");
    else if (wind_speed <= 3)
        printf("It is light air");
    else if (wind_speed <= 27)
        printf("There is a breeze");
    else if (wind_speed <= 47)
        printf("There is a gale");
    else if (wind_speed <= 63)
        printf("There is a storm");
    else
        printf("There is a hurricane");
    
    return 0;
}
