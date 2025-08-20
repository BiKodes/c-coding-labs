#include <stdio.h>

int main(){
    int lim = 100;
    int c;
    char s[100];
    int i = 0;

    while (i < lim -1){
        c = getchar();

        if (c == '\n')
            break;
        if (c == EOF)
            break;
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    printf("You entered: %s\n", s);
    return 0;
}
