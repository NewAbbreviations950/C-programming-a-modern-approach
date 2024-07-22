/*
* For each of the following pairs of scanf format strings, indicate whether or not the two
* strings are equivalent. lf they're not. show how they can be distinguished.
*
* "%d"       versus " %d"          // equivalent but allows the user to input a space before the number
* "%d-%d-%d" versus "%d -%d -%d"   // equivalent but allows the user to input a space between numbers
* "%f"       versus "%f "          // equivalent but allows the user to input a space after the number
* "%f,%f"    versus "%f, %f"       // equivalent but allows the user to input a space before the second number
*/

#include <stdio.h>

float value1;
float value2;

int main() {

  scanf("%f, %f", &value1, &value2);
  printf("the values are: %f, %f,\n", value1, value2);
  
  return 0;
}
