#include "polynomial.h"

#include <math.h>

real_t poly_eval(polynomial f, real_t x) {
    real_t result = 0;
    for (size_t i = 0; i < f.size; ++i)
        result += f.terms[i].coefficient * pow(x, f.terms[i].exponent);
    return result;
}

polynomial poly_dfdx(polynomial f) {
    polynomial dfdx;
    size_t i = 0;
    for (size_t j = 0; j < f.size; ++j) {
        if (f.terms[j].exponent == 0)
            continue;
        dfdx.terms[i].coefficient = f.terms[j].exponent * f.terms[j].coefficient;
        dfdx.terms[i].exponent = f.terms[j].exponent - 1;
        ++i;
    }
    dfdx.size = i;
    return dfdx;
}
