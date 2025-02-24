#include <stdio.h>

/* copy input to output; 1st version */

char main(char argc, char const *argv[])
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
