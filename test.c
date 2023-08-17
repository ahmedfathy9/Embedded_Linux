// test.c
#include <stdio.h>
#include "mathlib.h"

int main()
{
    int32_t a = 10;
    int32_t b = 5;

    printf("Addition: %ld\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %ld\n", mul(a, b));
    printf("Square Root: %d\n", calculate_sqrt(25));

    return 0;
}

