#ifndef POLY_H
#define POLY_H

#include <stddef.h>

#include "typedef.h"

#define POLY_CAPACITY 100

typedef struct {
    float coefficient;
    int exponent;
} term_t;

typedef struct {
    term_t terms[POLY_CAPACITY];
    size_t size;
} poly_t;

real_t poly_eval(poly_t f, real_t x);

poly_t poly_dfdx(poly_t f);

#endif // POLY_H
