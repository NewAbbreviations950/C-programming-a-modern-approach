/*
* Write a program that formats product information entered by the user.
* A session with the program should look like this:
*
* Enter an item number: 583
* Enter unit price: 13.5
* Enter a purchase date (dd/mm/yyyy): 27/03/2024
* 
* Item      Unit        Purchase
*           price       Date
* 583       $   13.50   27/03/2024
*
* The item number and date should be left justified; the unit price should be right justified.
* Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include <stdio.h>

int day, month, year, item;
float unit_price;

int main (){
    
    printf("Enter item number: ");
    scanf("%d", &item);
    
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    
    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    
    printf("\nItem\tUnit\tPurchase\n");
    printf("\tprice\tdate\n");
    printf("%-d\t$%4.2f\t%d/%d/%d", item, unit_price, day, month, year);
    
    return 0;
}

// Enter item number: 888
// Enter unit price: 456.54
// Enter purchase date (dd/mm/yyyy): 17/02/1997
//
// Item    Unit    Purchase
//         price   date
// 888     $456.54 17/2/1997
