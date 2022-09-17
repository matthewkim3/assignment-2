/*
Author:

This program prints the given character in binary.  It assumes a character is 8
bits.  The program will still work if you replace the hard coded character 'A'
with something else.
*/

/*
Instructor Hints (You may delete this when submitting)

You can use bitwise operators to extract each bit.  To get the rightmost bit,
you can use & with 1.  You can shift the bits to the right with the right bit
shift operator (>>).

You can also do the same with just arithmetic operators, though this may be the
one case where the bitwise operators are easier to read.
*/

#include <stdio.h> /* printf */

int main () {
    char c = 'Z';
    int bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7;
    bit0=c&1;
    c=c>>1;
    bit1=c&1;
    c=c>>1;
    bit2=c&1;
    c=c>>1;
    bit3=c&1;
    c=c>>1;
    bit4=c&1;
    c=c>>1;
    bit5=c&1;
    c=c>>1;
    bit6=c&1;
    c=c>>1;
    bit7=c&1;
    
    printf("%d%d%d%d%d%d%d%d\n", bit7, bit6, bit5, bit4, bit3, bit2, bit1, bit0);
}
