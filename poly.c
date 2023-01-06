#include "poly.h"

#include <assert.h>
#include <math.h>

real_t poly_eval(poly_t f, real_t x) {
    real_t result = 0;
    for (size_t i = 0; i < f.size; ++i) {
        assert(f.terms[i].exponent >= 0);
        result += f.terms[i].coefficient * pow(x, f.terms[i].exponent);
    }
    return result;
}

poly_t poly_dfdx(poly_t f) {
    poly_t dfdx;
    size_t i = 0;
    for (size_t j = 0; j < f.size; ++j) {
        assert(f.terms[j].exponent >= 0);
        if (f.terms[j].exponent == 0)
            continue;
        dfdx.terms[i].coefficient = f.terms[j].exponent * f.terms[j].coefficient;
        dfdx.terms[i].exponent = f.terms[j].exponent - 1;
        ++i;
    }
    dfdx.size = i;
    return dfdx;
}
