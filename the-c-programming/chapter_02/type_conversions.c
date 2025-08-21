#include <stdio.h>

/* This is naive implementation of the function atoi, which 
converts a string of digits into its numeric equivalent. */


/* atoi_custom: convert s to integer */
int atoi_custom(char s[]){

    int i, n = 0;

    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

/* lower_custom: convert c to lower case; ASCII only */
int lower_custom(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

unsigned long int next = 1;

/* rand_custom: return pseudo-random integer on 0..32767 */
int rand_custom(void){
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}

/* srand_custom: set seed for rand() */
void srand(unsigned int seed){
    next = seed;
}

int main(int argc, char const *argv[])
{
    char str[] = "12345";
    int num = atoi_custom(str);

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    /* Demonstrate lower_custom */
    char ch = 'G';
    printf("Lower of %c is %c\n", ch, lower_custom(ch));

    /* Demonstrate random_custom */
    srand_custom(1);

    for (int i = 0; i < 5; i++)
        printf("Random #%d: %d\n", i + 1, rand_custom());

    return 0;
}
