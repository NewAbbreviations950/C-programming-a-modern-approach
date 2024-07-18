/*
* Write a program that calculates the remaining balance on a loan after the first, second and
* third monthly payments:
*
* Enter amount of loan: 20000.00
* Enter interest rate: 6.0
* Enter monthly payment: 386.66
*
* Balance remaining after first payment: $19713.34
* Balance remaining after second payment: $19425 .25
* Balance remaining after third payment: $19135.71
*
* Display each balance with two digits after the decimal point. Hint: Each month, the balance
* is decreased by the amount of the payment, but increased by the balance times the monthly
* interest rate. To find the monthly interest rate, convert the inrerest rate entered by the user to
* a percentage and divide it by 12.
*/

#include <stdio.h>

float loan_outstanding, interest_rate, monthly_payment, new_balance_before_interest, interest_amount;

int main(){
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan_outstanding);
    
    printf("Enter annual interest rate: ");
    scanf("%f", &interest_rate);
    
    printf("Enter monthly payment: ");
    scanf("%f", & monthly_payment);
    
    // calulate first months balance
    
    new_balance_before_interest = loan_outstanding - monthly_payment;
    interest_amount = new_balance_before_interest * (interest_rate / 100);
    
    printf("Balance remaining after first payment: %.2f\n", new_balance_before_interest + interest_amount);
    
    // update loan_outstanding
    
    loan_outstanding = new_balance_before_interest + interest_amount;
    
    // calulate second months balance
    
    new_balance_before_interest = loan_outstanding - monthly_payment;
    interest_amount = new_balance_before_interest * (interest_rate / 100);
    
    printf("Balance remaining after second payment: %.2f\n", new_balance_before_interest + interest_amount);
    
    // update loan_outstanding
    
    loan_outstanding = new_balance_before_interest + interest_amount;
    
    // calculate third months balance
    
    new_balance_before_interest = loan_outstanding - monthly_payment;
    interest_amount = new_balance_before_interest * (interest_rate / 100);
    
    printf("Balance remaining after third payment: %.2f\n", new_balance_before_interest + interest_amount);
    
    // update loan_outstanding
    
    loan_outstanding = new_balance_before_interest + interest_amount;
    
    return 0;
}
