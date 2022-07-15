#include <stdio.h>
#include "complex.h"

int main(void) {
    complex x1;
    x1.real = 5;
    x1.imag = 6;
    double res = abs_c(x1);
    printf("%f\n", res);
    printf("%f", MYPI);
}

/*
int main() {
    complex x1,x2,x3;
    x1.real = 3;
    x1.imag = 2;
    x2.real = 2;
    x2.imag = 5;

    x3 = div_c(x1,x2);
    print_c(x3);
    printf("%lf\n", mysqrt(25));
}
*/

