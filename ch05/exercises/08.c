/*
 * The following if statement is unnecessarily complicated. Simplify it as much as possible.
 * (Hint: The entire statement can be replaced by a single assignment.)
 *
 * if (age >= 13) {
 *     if (age <= 19){
 *         teenager = true;
 *     } else {
 *         teenager = false;
 *     }
 * } else if (age < 13){
 *     teenager = false;
 * }
 *
 */

#include <stdio.h>
#include <stdbool.h>

int age;
bool teenager;

int main()
{
    if (13 <= age && age <= 19) {
            teenager = true;
        }
        
    printf("Teenager: %s", teenager ? "true" : "false");

    return 0;
}
