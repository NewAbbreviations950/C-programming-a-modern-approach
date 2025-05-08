What output does the following program fragment produce?

sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2) 
        continue;
    sum += i;
}
printf("%d\n", sum);

20

The loop adds the even numbers from 0 to 9 to sum. These numbers are 0, 2, 4, 6, and 8.
