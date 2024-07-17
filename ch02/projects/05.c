/*
* Write a program that asks the user to enter a value for x and then displays the value of the
* following polynomial:
* 3x5 + 2x4 - 5x3 - x2 + 7x - 6
* Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by itself
* repeatedly in order to compute the powers of x. (For example, x * x *x is x cubed.)
*/

/*
* I'm going to use math.h as I feel that's more up to date
*/ 

#include <stdio.h>
#include <math.h>


double x;

int main()
{
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    printf("Value of polynomial: %.0f", (3*pow(x,5)) + (2*pow(x,4)) - (5*pow(x,3)) - (pow(x,2)) + (7*x) - 6);

    return 0;
}
