/*
* If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify
* your answer.
*
* Pre-C99, it's possible because division of negative operands is implementation-defined;
* it can be algebraic division or round-towards-zero. C99 defines it to round-towards-zero.
*
* For example, C89 allows (-1)/2 == -1, while C99 requires (-1)/2 == 0. In all cases, -(1/2) == 0.
*/
