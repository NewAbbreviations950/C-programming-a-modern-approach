/******************************************************************************

Using the switch statement, write a program that converts a numerical grade
into a letter grade:

Enter numerical grade: 84
Letter grade: B

Use the following grading scale:

A = 90-100
B = 80-89
C = 70-79
D = 60-69
F = 0-59

Print an error message if the grade is larger than 100 or less than 0.

Hint: Break the grade into two digits, then use a switch statement to test the
ten's digit.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numerical_grade;
    
    printf("Enter numerical grade:\n");
    scanf("%d", &numerical_grade);
    
    if (numerical_grade < 0 || numerical_grade > 100) {
        printf("Error, grade is outside of 0-100 range.\n");
    }    
    else {
    
        switch (numerical_grade/10) {
            case 6:
                printf("Letter grade: D\n");
                break;
            
            case 7:
                printf("Letter grade: C\n");
                break;
            
            case 8:
                printf("Letter grade: B\n");
                break;
            
            case 9:
                printf("Letter grade: A\n");
                break;
            
            case 10:
                printf("Letter grade: A\n");
                break;
            
            default:
                printf("Letter grade F\n");
                break;
        }
    }

    return 0;
}
