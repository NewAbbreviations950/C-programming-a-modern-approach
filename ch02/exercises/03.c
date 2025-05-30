/* Condense the dweight.c program by (1) replacing the assignments height, length and width
* with initialisers and (2) removing the weight variable, instead calculating (volume + 165) / 166
* within the last printf.
*/

/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int height = 8;
    int length = 12;
    int width = 10;
    
    int volume = height * length * width;
    
    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (Cubic inches): %d\n", volume);
    printf("dimensional weight (pounds): %d\n", (volume + 165) / 166);
    
    return 0;
}
