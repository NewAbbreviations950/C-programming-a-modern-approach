/*
* Suppose that we call scanf as follows:
* scanf("%d%f%d", &i, &x, &j);
* if the user enters
* 10.3 5 6
* what will be the values of i, x and j after the call? (assusme that i and j are
* int variables and x is a float variable)
*/

#include <stdio.h>

int i, j;
float x;

int main(){
    
    scanf("%d%f%d", &i, &x, &j);
    printf("i is: %d\nx is:%f\nj is: %d\n", i, x, j);
    
    return 0;
}

/*
* 10.3 5 6
* i is: 10
* x is:0.300000
* j is: 5
*/
