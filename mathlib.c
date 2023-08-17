// mathlib.c
#include "mathlib.h"
#include <math.h>

int64_t add(int32_t a, int32_t b)
{
    return (int64_t)a + b;
}

int32_t sub(int32_t a, int32_t b)
{
    return a - b;
}

int64_t mul(int32_t a, int32_t b)
{
    return (int64_t)a * b;
}

int32_t calculate_sqrt(int64_t a)
{
    return (int32_t)sqrt(a);
}

