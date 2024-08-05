/*
 * Write a program that prompts the user to enter two dates and then indicates
 * which date comes earlier on the calendar:
 *
 * Enter first date (mm/dd/yy): 3/6/08
 * Enter second date (mm/dd/yy) : 5/17/07
 * 5/17/07 is earlier than 3/6/08
 *
 */

#include <stdio.h>

int main() {
    
    int date1_day, date1_month, date1_year, date2_day, date2_month, date2_year;
    
    printf("Enter first date (dd/mm/yy): ");
    scanf("%d/%d/%d", &date1_day, &date1_month, &date1_year);
    printf("Enter the second date (dd/mm/yy): ");
    scanf("%d/%d/%d", &date2_day, &date2_month, &date2_year);
    
    if (date1_year == date2_year && date1_month == date2_month && date1_day == date2_day) {
        printf("They are the same dates.");
    } else if ((date1_year < date2_year) || (date1_year == date2_year && date1_month < date2_month) || (date1_year == date2_year && date1_month == date2_month && date1_day < date2_day)) {
        printf("%d/%d/%d is earlier than %d/%d/%d",
            date1_day, date1_month, date1_year, date2_day, date2_month, date2_year);
    } else {
        printf("%d/%d/%d is earlier than %d/%d/%d",
            date2_day, date2_month, date2_year, date1_day, date1_month, date1_year);
    }
    
    
    return 0;
}
