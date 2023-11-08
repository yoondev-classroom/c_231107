// add.h
// #pragma once

#ifndef ADD_H
#define ADD_H

typedef int age_t;

int add(int lhs, int rhs);
int sub(int lhs, int sub);

// ODR(One Definition Rule)
struct AAA {
    int a;
};

#endif
