/*
 * File: 
 */
 
 #include <stdio.h>
 #include "simpio.h"
 
 int main(void)
 {
    double balance, next_balance, int_rate;

    printf("Interest calculations program.\n");
    printf("Starting balance? ");
    balance = GetReal();
    printf("Annual inerest rate percentage? ");
    int_rate = GetReal();
    next_balance = balance * (1 + int_rate / 100.0);
    printf("Balance after one year: %g\n", next_balance);
    next_balance = next_balance * (1 + int_rate / 100.0);
    printf("Balance after two years: %g\n", next_balance);


    return 0;
 }