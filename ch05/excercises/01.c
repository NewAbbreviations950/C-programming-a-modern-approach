/*
 * The following program fragments illustrate the relational and equality operators. Show the
 * output produced by each, assuming that i, j, and k are int variables.
 *
 */
 
 #include <stdio.h>
 
 int i, j, k;
 
 int main(){
     
    // a
    i = 2; j = 3;
    k = i * j == 6;                     // i * j is 6 so the expression j == 6 is true and returns a 1
    printf("%d\n", k);                  // 1
    
    // b
    i = 5; j = 10; k = 1;               // (1 > 5) < 10 
    printf("%d\n", k > i < j);          //    0    < 10 which is true so returns a 1
    
    // c
    i = 3; j = 2; k = 1;                // (3 < 2) == (2 < 1)
    printf("%d\n", i < j == j < k);     //    0    ==    0  which is true so returns a 1
    
    // d
    i = 3; j = 4; k = 5;                // ((3 % 4) + 3) < 5
    printf("%d\n", i % j + i < k);      //   (4   +  3)  < 5
                                        //        7      < 5 which is false so returns a 0 
    return 0;
 }
