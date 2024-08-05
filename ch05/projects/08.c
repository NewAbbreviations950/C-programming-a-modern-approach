/*
 * The following table shows the daily flights from one city to another:
 *
 * Departure time       Arrival time
 * 8:00 a.m.            10:16 a.m.
 * 9:43 a.m.            11:52 a.m.
 * 11:19 a.m.           1:31 p.m.
 * 12:47 p.m.           3:00 p.m.
 * 2:00 p.m.            4:08 p.m.
 * 3:45 p.m.            5:55 p.m.
 * 7:00 p.m.            9:20 p.m.
 * 9:45 p.m.            11:58 p.m.
 *
 * Write a program that asks user to enter a time (expressed in hours and minutes, using the
 * 24-hour clock). The program then displays the departure and arrival times for the
 * flight whose departure time is closest to that entered by the user:
 *
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Hint; Convert the input into a time expressed in minutes since midnight and compare it to
 * the departure times, also expressed in minutes since midnight. For example,
 * 13:15 is 13 x 60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m.
 * (767 minutes since midnight) than to any of the other departure times.
 *
 */



#include <stdio.h>

#define DT1 (8 * 60)
#define DT2 (9 * 60 + 43)
#define DT3 (11 * 60 + 19)
#define DT4 (12 * 60 + 47)
#define DT5 (14 * 60)
#define DT6 (15 * 60 + 45)
#define DT7 (19 * 60)
#define DT8 (21 * 60 + 45)
#define STR1 "departure 8:00 a.m., arrival 10:16 a.m."
#define STR2 "departure 9:43 a.m., arrival 11:52 a.m."
#define STR3 "departure 11:19 a.m., arrival 1:31 p.m."
#define STR4 "departure 12:47 p.m., arrival 3:00 p.m."
#define STR5 "departure 2:00 p.m., arrival 4:00 p.m."
#define STR6 "departure 3:45 p.m., arrival 5:55 p.m."
#define STR7 "departure 7:00 p.m., arrival 9:20 p.m."
#define STR8 "departure 9:45 p.m., arrival 11:58 p.m."

int time_hour, time_min, time_since_midnight;

int main()
{
    printf("Enter a departure time in 24-hour time: ");
    scanf("%d:%d", &time_hour, &time_min);
    
    time_since_midnight = time_hour * 60 + time_min;
    
    if (time_since_midnight < (DT1 + (DT2 - DT1) / 2)) {
        printf("Closest %s", STR1);
    } else if (time_since_midnight < (DT2 + (DT3 - DT2) / 2)) {
        printf("Closest %s", STR2);
    } else if (time_since_midnight < (DT3 + (DT4 - DT3) / 2)) {
        printf("Closest %s", STR3);
    } else if (time_since_midnight < (DT4 + (DT5 - DT4) / 2)) {
        printf("Closest %s", STR4);
    } else if (time_since_midnight < (DT5 + (DT6 - DT5) / 2)) {
        printf("Closest %s", STR5);
    } else if (time_since_midnight < (DT6 + (DT7 - DT6) / 2)) {
        printf("Closest %s", STR6);
    } else if (time_since_midnight < (DT7 + (DT8 - DT7) / 2)) {
        printf("Closest %s", STR7);
    } else {
        printf("Closest %s", STR8);
    }

    return 0;
}
