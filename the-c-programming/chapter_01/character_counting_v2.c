# include <stdio.h>

main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        --nc;
        // or
        // nc = nc - 1
    printf("%1d\n", nc);
}
