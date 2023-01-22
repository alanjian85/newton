#include <stdio.h>
#include <string.h>

#include "poly.h"
#include "newton.h"

int main() {
    real_t guess;
    int precision;
    printf("Initial guess: ");
    scanf("%lf", &guess);
    printf("Precision: ");
    scanf("%d", &precision);
    char input[512];
    scanf("%*c");
    printf("Polynomial: ");
    fgets(input, sizeof(input), stdin);
    const char* delimiters = "+";
    char* token = strtok(input, delimiters);
    poly_t f;
    f.size = 0;
    while (token) {
        real_t coefficient;
        int exponent;
        char c;
        sscanf(token, "%lf%*c%*c%i", &coefficient, &exponent);
        f.terms[f.size].coefficient = coefficient;
        f.terms[f.size].exponent = exponent;
        ++f.size;
        token = strtok(NULL, delimiters);
    }
    poly_t dfdx = poly_dfdx(f);
    printf("%lf\n", newton(f, dfdx, guess, guess));
    return 0;
}
