/******************************************************************************

Write a program that asks the user to enter two integers, then calculates and
displays their greatest common divisor (GCD):

Enter two integers: 12 28
Greatest common divisor: 4

Hint: The classic algorithm for computing the GCD, known as Euclid’s algorithm,
goes as follows:

Let m and n be variables containing the two numbers.
If n is 0, then stop: m contains the GCD.
Otherwise, compute the remainder when m is divided by n.
Copy n into m and copy the remainder into n.
Repeat the process, starting with testing whether n is 0.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m, n;
    
    printf("This program calculates the greatest common divisor of two numbers.\n");
    printf("Enter two positive integers: ");
    scanf("%d %d", &m, &n);
    
    if (m == 0 && n == 0) {
        printf("GCD is not defined for both numbers being zero.\n");
        return 1;
    }
    
    while (n != 0) {
        int temp;
        temp = m % n;
        m = n;
        n = temp;
    }
    
    printf("The greatest common divisor is: %d\n", m);

    return 0;
}
