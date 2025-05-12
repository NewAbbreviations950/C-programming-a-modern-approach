/*
Write a program that finds the largest number in a series of numbers entered by the user.
The program must prompt the user to enter numbers one by one. When the user enters 0 or a
negative number, the program must display the largest nonnegative number entered:

Enter a number: 60
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0
The largest number entered was 100.62

Notice that the numbers aren’t necessarily integers.

*/

#include <stdio.h>

int main()
{
  float highest_number, temp_number;
  int first_input = 1; //Flag to check if the first input is a valid number
    
	printf("This program returns the largest number in a series of positive numbers entered by the user.\n");
	printf("Enter 0 or a nonnegative number to exit the program.\n");
	
	while (1) {
	    printf("Enter a number: ");
	    scanf("%f", &temp_number);
	    
	    if (temp_number <= 0 && first_input) {
	        printf("Please enter at least one valid number.\n");
	        continue;
	    } else if (temp_number <= 0) {
	        break;
	    }
	    
	    if (first_input) {
	        highest_number = temp_number;
	        first_input = 0;
	    } else if (temp_number > highest_number) {
	        highest_number = temp_number;
	    }
	}
	
	if (first_input) {
	    printf("No valid numbers entered. Please enter at least one valid number.\n");
	} else {
	    printf("The Highest number entered was: %g", highest_number);
	}
	
    return 0;

}

