/*
* For each of the following pairs of scanf format strings, indicate whether or not the two
* strings are equivalent. lf they're not. show how they can be distinguished.
*
* "%d"       versus " %d"          // equivalent as scanf skips whitespace
* "%d-%d-%d" versus "%d -%d -%d"   // equivalent as scanf skips whitespace
* "%f"       versus "%f "          // equivalent as scanf skips whitespace
* "%f,%f"    versus "%f, %f"       // equivalent as scanf skips whitespace
*/

#include <stdio.h>

float value1;
float value2;

int main() {

  scanf("%f, %f", &value1, &value2);
  printf("the values are: %f, %f,\n", value1, value2);
  
  return 0;
}
