/*
 * The following program fragments illustrate the logical operators. Show the
 * output produced by each, assuming that i, j, and k are int variables.
 *
 */
 
 #include <stdio.h>
 
 int i, j, k;
 
 int main(){
     
    // a
    i = 10; j = 5;                      // !expr has the value 1 if expr has the value 0
    printf("%d\n", !i < j);             // 0 < 5 is true so returns a 1
    
    // b
    i = 2; j = 1;                       // (! (!i)) + (!j)
    printf("%d\n", !!i + !j);           // (!(0)) + 0
                                        // 1 + 0
                                        // 1
    
    // c
    i = 5; j = 0; k = -5;               // expr1 && expr2 has the value 1 if the values of expr1 expr2 are both non-zero 
    printf("%d\n", i && j || k);        // expr1 || expr2 has the value 1 if either expr1 or/or both has a non-zero value
                                        // ((5 && 0) || -5) (one non-zero so returns 0)
                                        //     0    || -5 one non-zero so returns 1
                                        // 1
    
    // d
    i = 1; j = 2; k = 3;                // (1 < 2) || 3 both non-zero so returns 1
    printf("%d\n", i < j || k);         // 1
    
    
    return 0;
 }
