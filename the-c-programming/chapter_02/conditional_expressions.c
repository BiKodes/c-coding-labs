#include <stdio.h>

int main(void) {
    int n = 12;
    int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int i;

    for (i = 0; i < n; i++) {
        printf("%6d%c", a[i], (i % 10 == 9 || i == n - 1) ? '\n' : ' ');
    }

    printf("You have %d item%s.\n", n, (n == 1) ? "" : "s");

    return 0;
}
