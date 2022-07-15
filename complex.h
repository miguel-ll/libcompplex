#ifndef CCOMPLEX_H
#define CCOMPLEX_H

typedef struct complex {
    double real, imag;
} complex;

complex sum_c(complex z1, complex z2);

complex sub_c(complex z1, complex z2);

complex conjugate(complex z);

complex mult_c(complex z1, complex z2);

complex div_c(complex z1, complex z2);

double abs_c(complex z);

void print_c(complex z);

#endif

