#include <stdio.h>
#include <ctype.h>

/* htoi: convert hex string s to integer */
int htoi(const char s[]){
    int i = 0, n = 0;

    // skip optional "0x" or "0X"
    
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    for (; s[i] != '\0'; i++){
        int c = s[i];
        if (c >= '0' && c <= '9')
            n = 16 * n + (c - '0');
        else if (c >= 'a' && c <= 'f')
            n = 16 * n + (c - 'a' + 10);
        else if (c >= 'A' && c <= 'F')
            n = 16 * n + (c - 'A' + 10);
        else
        /* stop at first non-hex character */
            break;
    }
    return n;
}


int main(void){
    printf("0x1A = %d\n", htoi("0x1A"));
    printf("FF = %d\n", htoi("FF"));
    printf("0Xabc = %d\n", htoi("0Xabc"));
    printf("123 = %d\n", htoi("123"));

    return 0;
}

