/*
* Write calls of printf that display a float variable x in the following formats.
*
* Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
* Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
* Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
* Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
*/

#include <stdio.h>

float x = 15568.8896f;

int main() {
    
    printf("%-8.1e\n", x);  // 1.6e+04 
    printf("%10.6e\n", x);  // 1.556889e+04
    printf("%-8.3f\n", x);  // 15568.890
    printf("%6.0f\n", x);   // 15569
    
    return 0;
}
