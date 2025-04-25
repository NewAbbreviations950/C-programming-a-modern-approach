/******************************************************************************

Write a program that asks the user for a two-digit number, then prints the
English word for the number:

Enter a two-digit number: 45
You entered the number forty-five.

Hint: Break the number into two digits. Use one switch statement to print the
word for the first digit ("twenty," "thirty," and so forth). Use a second switch
statement to print the word for the second digit. Don't forget that the numbers
between 11 and 19 require special treatment.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int whole_number, tens, ones;
    
    printf("Enter a two digit number: ");
    scanf("%d", &whole_number);
    
    if (whole_number > 99 || whole_number < 10) {
        printf("Error, not a two digit number.\n");
        return 1;
    }
    
    tens = whole_number / 10;
    ones = whole_number % 10;
    
    if (tens == 1) {
        switch (ones) {
            case 1:
                printf("You entered the number eleven.\n");
                break;
                
            case 2:
                printf("You entered the number twelve.\n");
                break;
                
            case 3:
                printf("You entered the number thirteen.\n");
                break;
                
            case 4:
                printf("You entered the number fourteen.\n");
                break;
                
            case 5:
                printf("You entered the number fifteen.\n");
                break;
                
            case 6:
                printf("You entered the number sixteen.\n");
                break;
                
            case 7:
                printf("You entered the number seventeen.\n");
                break;
                
            case 8:
                printf("You entered the number eighteen.\n");
                break;
                
            case 9:
                printf("You entered the number nineteen.\n");
                break;
        }
        return 0;
        
    } else {
        switch (tens) {
            case 2:
                printf("You entered the number twenty");
                break;
            
            case 3:
                printf("You entered the number thirty");
                break;
                
            case 4:
                printf("You entered the number fourty");
                break;
                
            case 5:
                printf("You entered the number fifty");
                break;
                
            case 6:
                printf("You entered the number sixty");
                break;
                
            case 7:
                printf("You entered the number seventy");
                break;
                
            case 8:
                printf("You entered the number eighty");
                break;
                
            case 9:
                printf("You entered the number ninety");
                break;
        }
        
        switch (ones) {
            case 1:
                printf(" one.");
                break;
                
            case 2:
                printf(" two.");
                break;
                
            case 3:
                printf(" three.");
                break;
                
            case 4:
                printf(" four.");
                break;
                
            case 5:
                printf(" five.");
                break;
                
            case 6:
                printf(" six.");
                break;
                
            case 7:
                printf(" seven.");
                break;
                
            case 8:
                printf(" eight.");
                break;
                
            case 9:
                printf(" nine.");
                break;
                
            default:
                printf(".");
                break;
        }
    }
        
    return 0;
}
