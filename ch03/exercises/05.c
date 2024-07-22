/*
* Suppose that we call scanf as follows:
* scanf("%f%d%f", &x, &i, &y);
* if the user enters
* 12.3 45.6 789
* what will be the values of x, i and y be after the call? (assusme that x and y are
* float variables and i is an int variable)
*/

#include <stdio.h>

int i;
float x, y;

int main(){
    
    scanf("%f%d%f", &x, &i, &y);
    printf("x is: %f\ni is: %d\ny is: %f\n", x, i, y);
    
    return 0;
}

/*
* 12.3 45.6 789
* x is: 12.300000
* i is: 45
* y is: 0.600000
*/
