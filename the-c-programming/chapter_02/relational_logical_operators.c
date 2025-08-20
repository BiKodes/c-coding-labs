#include <stdio.h>

int main(int argc, char const *argv[])
{
    int lim = 100;
    char s[100];
    int i,c;

    for (i=0; i < lim -1 && (c=getchar()) != '\n' && c != EOF; ++i){
        s[i] = c;
    }
    s[i] = '\0';

    printf("You entered: %s\n", s);
    return 0;
}
