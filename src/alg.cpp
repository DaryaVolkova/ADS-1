// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>

bool checkPrime(uint64_t value) {
    for (int i = 2; i < static_cast<int>(sqrt(value)) + 1; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t tmp = 1;
    while (n > 0) {
        tmp++;
        if (checkPrime(tmp)) {
            n--;
        }
    }
    return tmp;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t tmp = value;
    bool flag = false;
    while (!flag) {
        tmp++;
        if (checkPrime(tmp)) {
            flag = true;
        }
    }
    return tmp;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
