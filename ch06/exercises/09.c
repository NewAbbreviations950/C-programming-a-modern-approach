Translate the for statement of Exercise 8 into an equivalent while statement. You will need one statement in addition to the while loop itself.

for (i = 10; i >= 1; i /= 2) 
    printf("%d ", i++);

int i = 10
while (i >= 1) {
  printf("%d", i++);
  i /= 2;
}
