/*
 * The following program fragments illustrate the i:;hort-circuit behavior of logical expressions.
 * Show the output produced by each, assuming that i, j, and k are int variables.
 *
 */
 
 #include <stdio.h>
 
 int i, j, k;
 
 int main(){
     
    // a
    i = 3; j = 4; k = 5;
    printf("%d\n", i < j || ++j < k);   // (3 < 4) || (5 < 5) because the first expression is a
                                        // non-zero (1 because the comparison is true)
                                        // the OR returns a 1 value and stops before incrementing j
    printf("%d %d %d\n", i, j, k);      // 3 4 5
    
    // b
    i = 7; j = 8; k = 9;
    printf("%d\n", i - 7 && j++ < k);   // (7 - 7) && (9 < 9) because the first expression is a
                                        // zero the AND operator fails, returns a 0 and stops
                                        // before incrementing j
    printf("%d %d %d\n", i, j, k);      // 7 8 9
    
    // c
    i = 7; j = 8; k = 9;
    printf("%d\n", (i = j) || (j = k)); // 8 || 9 because the first expression has a non-zero value
                                        // the OR operator returns a 1 value before evaluating the
                                        // right hand side so 9 is not assigned to j
    printf("%d %d %d\n", i, j, k);      // 8 8 9
    
    // d
    i = 1; j = 1; k = 1;
    printf("%d\n", ++i || ++j && ++k);  // ((2 || ++j) && ++k) first expression is a non-zero so the OR
                                        // returns a 1 value and j isnt incremented
                                        // (0) && ++k first expression is a zero so k isnt incremented
    printf("%d %d %d\n", i, j, k);      // 2 1 1
    
    return 0;
 }
