# include <stdio.h>

/* copy input to output; 2nd version */

main()
{
    int c;

    /* The input is centralized */

    while ((c = getchar()) != EOF)
        putchar(c);
}
