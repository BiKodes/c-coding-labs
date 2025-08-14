# include <stdio.h>

/* strlen: retrun lenth of s */
int strlen(char s[])
{
    int i;

    while (s[i] != '\0')
        ++i;
    return i;
}