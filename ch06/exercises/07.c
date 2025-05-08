Translate the program fragment of exercise 2 into a single for statement.

i = 9384;
do {
    printf("%d", i);
    i /= 10;
} while (i > 0);

for (i = 9384; i > 0; i /= 10) {
  printf("%d", i);
