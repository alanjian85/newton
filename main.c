#include <stdio.h>

#include "polynomial.h"

int main() {
    polynomial f;
    f.size = 2;
    f.terms[0].coefficient = 1;
    f.terms[0].exponent = 6;
    f.terms[1].coefficient = -2;
    f.terms[1].exponent = 0;
    printf("Evaluation of f(1.2246205): %lf\n", poly_eval(f, 1.2246205));

    polynomial dfdx = poly_dfdx(f);
    for (int i = 0; i < dfdx.size; ++i)
        printf("Term %i: %lfx^%lf\n", i + 1, dfdx.terms[i].coefficient, dfdx.terms[i].exponent);

    return 0;
}
