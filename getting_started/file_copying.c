#include <stdio.h>

/* copy input to output; lst version */

char main(char argc, char const *argv[])
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
