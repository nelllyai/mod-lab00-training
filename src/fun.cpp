// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    if (n == 1) return x;
    return x * power(x, n - 1);
}
