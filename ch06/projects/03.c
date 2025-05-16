/******************************************************************************

Write a program that asks the user to enter a fraction, then reduces the
fraction to its lowest terms:

Enter a fraction: 6/12
In lowest terms: 1/2
Hint: To reduce a fraction to its lowest terms, first compute the GCD of the
numerator and denominator. Then divide both the numerator and denominator by
the GCD.


*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int numerator, denominator, n, m, gcd;
    
    printf("This program reduces a fraction to its lowest terms.\n");
    printf("Enter a fraction using a forward slash between the numbers.\n");
    
    if (scanf("%d/%d", &numerator, &denominator) != 2 || denominator == 0) {
        printf("Invalid input. Please enter a valid fraction with a non-zero denominator.\n");
        return 1;
    }
    
    n = numerator > 0 ? numerator : -numerator;
    m = denominator > 0 ? denominator : -denominator;
    
    while (n != 0) {
        int temp;
        temp = m % n;
        m = n;
        n = temp;
    }
    
    gcd = m;
    
    int reduced_numerator = numerator / gcd;
    int reduced_denominator = denominator / gcd;
    
    if (reduced_numerator < 0 && reduced_denominator < 0) {
        reduced_numerator = -reduced_numerator;
        reduced_denominator = -reduced_denominator;
    }
    
    printf("The fraction in its lowest terms is: %d/%d", reduced_numerator, reduced_denominator);

    return 0;
}
