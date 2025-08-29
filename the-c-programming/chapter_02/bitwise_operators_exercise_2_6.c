#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y){
    unsigned mask = ~(~0 << n);
    return (x & ~(mask << (p+1-n))) | ((y & mask) << (p+1-n));
}

int main(){
    unsigned x = 0b10101010;
    unsigned y = 0b11001111;

    unsigned result = setbits(x, 4, 3, y);

    printf("Result: %u (binary: ", result);

    for (int i = 7; i >= 0; i--){
        printf("%d", (result >> i) & 1);
    }
    printf(")\n");

    return 0;
}
