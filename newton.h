#ifndef NEWTON_H
#define NEWTON_H

#include "typedef.h"
#include "polynomial.h"

real_t newton(polynomial f, polynomial dfdx, real_t initial_x, int precision); 

#endif // NEWTON_H
