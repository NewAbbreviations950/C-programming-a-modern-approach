/*
 * Write a program that asks the user to enter a two-digit number, then prints the number with
 * its digits reversed. A session with the program should have the following appearance:
 * 
 * Enter a two-digit number: 28
 * The reversal is: 82
 *
 * Read the number using %d, then break it into two digits. Hint: if n is an integer, then n % 10
 * is the last digit in n and n / 10 is n with the last digit removed.
 *
 * Extend the program to handle 3 digits. (project 2)
 */

#include <stdio.h>

int main(void)
{
    int original_number;
    
    printf("Enter a three digit number: ");
    scanf("%d", &original_number);
    
    printf("The reversal is: %d%d%d\n", original_number % 10, original_number / 10 % 10,
                original_number / 100);
    
    return 0;
