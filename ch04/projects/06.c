/*
 * European countries use a 13-digit code, known as a European Article Number (EAN)
 * instead of the 12-digit Universal Product Code (UPC) found in North America. Each EAN
 * ends with a check digit, just as a UPC does. The technique for calculating the
 * check digit is also similar:
 *
 *      Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
 *      Add the first, third, fifth, seventh, ninth, and eleventh digits.
 *      Multiply the first sum by 3 and add it to the second sum.
 *      Subtract 1 from the total.
 *      Compute the remainder when the adjusted total is divided by 10.
 *      Subtract the remainder from 9.
 *
 * For example, consider Gulluoglu Turkish Delight Pistachio & Coconut which has an EAN
 * of 8691484260008. The first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17, and the second sum is
 * 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiplying the first sum by 3 and adding the second yields 82.
 * SubtracLing 1 gives 81. The remainder upon dividing by 10 is 1.
 * When the remainder is subtracted from 9, the result is 8,
 * which matches the last digit of the original code.
 * Your job is to modify the upc.c program of Section 4.1 so that it calculates
 * the check digit for an EAN.
 * The user will enter the first 12 digits of the EAN as a single number:
 * 
 * Enter the first 12 digits of an EAN: 869148426000
 * Check digit: 8
 */

/* Computes a European Article Number (EAN) */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12,
        first_sum, second_sum, total;
    
    printf("Enter the first 12 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

    first_sum = n2 + n4 + n6 + n8 + n10 + n12;
    second_sum = n1 + n3 + n5 + n7 + n9 + n11;
    total = 3 * first_sum + second_sum;
    
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
