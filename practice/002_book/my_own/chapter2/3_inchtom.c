/*
 * File: inchtocm.c
 * ----------------
 * This program reads in a number given in feet, followed on a
 * separate line by the number of inches, then converts it to
 * its metric equivalent in centimeters.
 */

 
 #include <stdio.h>
 #include "genlib.h"
 #include "simpio.h"
 
 int main(void)
 {
    double feet, inch, cm;

    printf("This program converts from feet and inches to\n");
    printf("centimeters.\n");
    printf("Number of feet? ");
    feet = GetReal();
    printf("Number of inches? ");
    inch = GetReal();
    cm = (feet* 12 + inch) * 2.54;
    printf("%g feet and %g inches = %g cm\n", feet, inch, cm);

    return 0;
 }