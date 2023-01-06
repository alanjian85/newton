#include <stdio.h>

#include "poly.h"
#include "newton.h"

int main() {
    poly_t f;
    f.size = 2;
    f.terms[0].coefficient = 1;
    f.terms[0].exponent = 6;
    f.terms[1].coefficient = -2;
    f.terms[1].exponent = 0;
    poly_t dfdx = poly_dfdx(f);
    printf("The approximation of the sixth root of 2 that is accurate to 8 decimal places is: %lf\n", newton(f, dfdx, 1, 8));
    return 0;
}
