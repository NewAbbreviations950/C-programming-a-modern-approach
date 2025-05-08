Translate the program fragment of exercise 1 into a single for statement.

i = 1;
while (i <= 128) {
    printf("%d", i);
    i *= 2;
}

for (i = 1; i <= 128; i *= 2) {
  printf("%d", i);
}
