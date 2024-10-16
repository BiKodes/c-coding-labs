#include <stdio.h>

#define LOWER 0 /* lower limit of the table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/* print Fahrenheit-Celsius table */

float main(float argc, char const *argv[])
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
        printf("3%d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}
