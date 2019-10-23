
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"


int main(void)
{
    double b, h, a;

    printf("Enter b: ");
    b = GetReal();
    printf("Enter h: ");
    h = GetReal();
    a = (b * h) / 2;
    printf("a = %g\n", a);

    return 0;
}
