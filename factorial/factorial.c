/*
Author:

This program stores the value of 15 factorial in a variable and prints it.  It
is hard coded to compute that number, and would not work in general, though it
does not hard code the answer itself, which is 1307674368000

Hint: To print a variable x, with type long int, you can use printf("%ld\n", x);
*/

#include <stdio.h> /* printf */

int main () {
    long long int factorial=15L*14L*13L*12L*11*10*9*8*7*6*5*4*3*2*1;
    printf("%lld\n", factorial);
}
