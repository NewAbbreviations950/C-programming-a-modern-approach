Show how to replace a continue statement by an equivalent goto statement.

for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;
    }
    printf("%d ", i);
}

for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        goto skip;
    }
    printf("%d ", i);
    skip:;
}
