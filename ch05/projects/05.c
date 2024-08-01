/*
 * ln one state. single residents are subject to the following income tax:
 *
 * Income           Amount of tax
 * Not over $750    1% of income
 * $750-$2,250      $7.50 plus 2% of amount over $750
 * $2,250-$3,750    $37.50 plus 3% of amount over $2,250
 * $3,750-$5,250    $82.50 plus 4% of amount over $3,750
 * $5,250-$7,000    $142.50 plus 5% of amount over $5,250
 * Over $7,000      $230.00 plus 6% of amount over $7,000
 *
 * Write a program that asks the user to enter the amount of taxable income,
 * then displays the tax due.
 */

#include <stdio.h>

int main(void)
{
    float income, tax_payable;

    printf("Enter your taxable income: ");
    scanf("%f", &income);
    
    if (income <= 750)
        tax_payable = income * 0.01;
    else if (income < 2250)
        tax_payable = 7.5 + ((income - 750) * 0.02);
    else if (income < 3750)
        tax_payable = 37.5 + ((income - 2250) * 0.03);
    else if (income < 5250)
        tax_payable = 82.5 + ((income - 3750) * 0.04);
    else if (income < 7000)
        tax_payable = 142.5 + ((income - 5250) * 0.05);
    else
        tax_payable = 230 + ((income - 7000) * 0.06);
        
    printf("Your total tax due is: %.2f", tax_payable);
    
    return 0;
}
