#ifndef NEWTON_H
#define NEWTON_H

#include "typedef.h"
#include "poly.h"

real_t newton(poly_t f, poly_t dfdx, real_t initial_x, int precision); 

#endif // NEWTON_H
