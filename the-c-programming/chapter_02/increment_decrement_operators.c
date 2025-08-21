#include <stdio.h>

/* squeeze: delete all c from s */

void squeeze(char s[], int c){
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

/* strcat_custom: concatenate t to end of s; s must be big enough  */
void strcat(char s[], char t[]){
    int i = 0, j = 0;

    while (s[i] != '\0') /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0') /* copy t */
        ;
}

int main(){
    char str1[100] = "jambo dunia";
    char str2[] = "!!!";

    squeeze(str1, 'l'); /* remove all 'l' */
    printf("After squeeze: %s\n", str1);

    strcat_custom(str1, str2); /* append str2*/
    printf("After strcat: %s\n", str1);

    return 0;
}