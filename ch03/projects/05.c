/*
 * Write a program that asks the user to enter the numbers from
 * 1 to 16 (in any order) and then displays the numbers in a
 * 4 by 4 arrangement, followed by the sums of the rows, columns,
 * and diagonals:
 * Enter the numbers from 1 to 16 in any order:
 * 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 *
 * 16  3  2 13
 *  5 10 11  8
 *  9  6  7 12
 *  4 15 14  1
 *
 *  Row sums: 34 34 34 34
 *  Column sums: 34 34 34 34
 *  Diagonal sums: 34 34
 *
 *  If the row, column, and diagonal sums are all the same (as they
 *  are in this example), the numbers are said to form a magic square.
 *  The magic square shown here appears in a 1514 engraving by artist
 *  and mathematician Albrecht Durer. (Note that the middle numbers in
 *  the last row give the date of the engraving.)
 */

#include <stdio.h>

int aa, ab, ac, ad, ae, af, ag, ah, ai, aj, ak, al, am, an, ao, ap;

int main() {
    
    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &aa, &ab, &ac, &ad,
                                              &ae, &af, &ag, &ah,
                                              &ai, &aj, &ak, &al,
                                              &am, &an, &ao, &ap);
    
    printf("\nRow sums: %d %d %d %d\n", aa+ab+ac+ad, ae+af+ag+ah, ai+aj+ak+al, am+an+ao+ap);
    printf("Column sums: %d %d %d %d\n", aa+ae+ai+am, ab+af+aj+an, ac+ag+ak+ao, ad+ah+al+ap);
    printf("Diagonal sums: %d %d\n", aa+af+ak+ap, ad+ag+aj+am);

    return 0;
}

// Enter the numbers from 1 to 16 in any order:
// 2 1 4 3 5 7 6 9 8 11 10 13 12 15 14 16
//
// Row sums: 10 27 42 57
// Column sums: 27 34 34 41
// Diagonal sums: 35 32
