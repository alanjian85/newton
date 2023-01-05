#include "polynomial.h"

#include <math.h>

real_t poly_eval(polynomial f, real_t x) {
    real_t result = 0;
    for (size_t i = 0; i < f.size; ++i)
        result += f.terms[i].coefficient * pow(x, f.terms[i].exponent);
    return result;
}
