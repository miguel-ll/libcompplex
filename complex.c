#include <stdio.h>
#include "mymath.h"
#include "complex.h"

complex sum_c(complex z1, complex z2) {
    complex z3;
    z3.real = z1.real + z2.real;
    z3.imag = z1.imag + z2.imag;
    return z3;
}

complex sub_c(complex z1, complex z2) {
    complex z3;
    z3.real = z1.real - z2.real;
    z3.imag = z1.imag - z2.imag;
    return z3;
}

complex conjugate(complex z) {
    complex conjgt;
    conjgt.real = z.real;
    conjgt.imag = -z.imag;
    return conjgt;
}

complex mult_c(complex z1, complex z2) {
    complex z3;
    z3.real = (z1.real * z2.real) - (z1.imag * z2.imag);
    z3.imag =  (z1.real * z2.imag) + (z2.real * z1.imag);
    return z3;
}

complex div_c(complex z1, complex z2) {
    complex z3;
    z3.real = ((z1.real*z2.real) + (z1.imag*z2.imag)) / (z2.real*z2.real + z2.imag*z2.imag);
    z3.imag = ((z1.imag*z2.real) - (z1.real*z2.imag)) / (z2.real*z2.real + z2.imag*z2.imag);
    return z3;
}

double abs_c(complex z) {
    double c = (z.real*z.real) + (z.imag*z.imag);
    return mysqrt(c);
}

void print_c(complex z) {
    printf("%f + %fi\n", z.real, z.imag);
}

