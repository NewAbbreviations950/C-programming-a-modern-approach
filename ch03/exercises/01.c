/*
* Whal output do the following calls of printf produce?
* printf("%6d,%4d", 86, 1040);
* printf("%12.5e", 30.253);
* printf("%.4f", 83.162);
* printf("%-6.2g", .0000009979);
*/

#include <stdio.h>

int main(void) {

    printf("%6d,%4d", 86, 1040);         // "    86,1040"
    printf("%12.5e", 30.253);            // " 3.02530e+01"
    printf("%.4f", 83.162);              // "83.1620"
    printf("%-6.2g", .0000009979);       // "1e-06"

return 0;

}
