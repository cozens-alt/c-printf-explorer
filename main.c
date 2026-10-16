#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Variables
    int i = 42;
    short s = 10;
    long l = 100000L;
    float f = 2.768f;
    double d = 2.7685;
    char c = 'A';

    // 2. Print with sizes
    printf("int: %d (%zu bytes)\n", i, sizeof(i));
    printf("short: %hd (%zu bytes)\n", s, sizeof(s));
    printf("long: %ld (%zu bytes)\n", l, sizeof(l));
    printf("float: %f (%zu bytes)\n", f, sizeof(f));
    printf("double: %f (%zu bytes)\n", d, sizeof(d));
    printf("char: %c (%zu bytes)\n", c, sizeof(c));

    // 3. ASCII
    printf("ASCII of %c is %d\n", c, c);

    // 4. Receipt - left and right aligned
    printf("\n%-10s %5s %10s\n", "Item", "Qty", "Price");
    printf("%-10s %5d %10.2f\n", "Pen", 2, 1.50);
    printf("%-10s %5d %10.2f\n", "Book", 1, 12.99);

    // 5. Escape sequences
    printf("\nThis has a \"double quote\", a \\ backslash, and a \t tab\n");

    // 6. 255 in 3 formats
    printf("\n255 in decimal: %d, octal: %o, hex: %x\n", 255, 255, 255);

    return 0;
}
