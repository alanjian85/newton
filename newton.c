#include "newton.h"

#include <math.h>

real_t newton(polynomial f, polynomial dfdx, real_t initial_x, int precision) {
    real_t prev, curr = initial_x;
    const int multiplier = pow(10, precision);
    do {
        prev = curr;
        curr = prev - poly_eval(f, prev) / poly_eval(dfdx, prev);
    } while ((int) (prev * multiplier) != (int) (curr * multiplier));
    return curr;
}
