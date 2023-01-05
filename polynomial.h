#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <stddef.h>

#include "typedef.h"

#define POLYNOMIAL_CAPACITY 100

typedef struct {
    float coefficient;
    float exponent;
} term;

typedef struct {
    term terms[POLYNOMIAL_CAPACITY];
    size_t size;
} polynomial;

real_t poly_eval(polynomial f, real_t x);

polynomial poly_dfdx(polynomial f);

#endif // POLYNOMIAL_H
