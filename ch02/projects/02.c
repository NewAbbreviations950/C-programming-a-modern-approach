/*
* Write a program that computes the volume of a sphere with a 10-meter radius, using the formula
* v= 4/3pir3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?)
* Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by i1self twice to corupute pi3.
*/


#include <stdio.h>
#include <math.h>

int radius;

int main()
{
    printf("What is the radius of the sphere you want to calcualte the volume of?\n");
    scanf("%d", &radius);
    printf("The volume is: %.3f", 4.0f / 3.0f * M_PI * pow(radius, 3.0f));

    return 0;
}

/*
* Cheated and included math.h and also did project 03 at the same time
*/
