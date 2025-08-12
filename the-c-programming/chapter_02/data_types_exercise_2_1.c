#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
* Helper functions to compute integer ranges
*/

void compute_signed_range(char *type_name, long long (*cast_fn)(long long), long long start_val){
    long long val = start_val;
    long long prev = val;

    while (1) {
        prev = val;
        val = val + 1;

        if (val < prev){
            printf("Signed %-6s: min = %lld, max = %lld\n", type_name, val, prev);
            break;
        }
    }
}

void compute_unsigned_range(
    char *type_name, 
    unsigned long long (*cast_fn)(unsigned long long), 
    unsigned long long start_val){
        unsigned long long val = start_val;
        unsigned long long prev = val;

        while (1){
            prev = val;
            val = val +1;
            if (val < prev){
                printf("Unsigned %-6s: min = %llu, max = %llu\n", type_name, (unsigned long long)0, prev);
                break;
            }
        }
}

/*
* Floating point computation for min/max
* We will just multiply or divide untill overflow or underflow
*/

void compute_float_range(char *type_name, long double start_val){
    long double val = start_val;
    // Max
    while (val * 2.0L > val){
        val *= 2.0l;
    }
    printf("%s approx max = %Le\n", type_name, val);

    // Min (positive)
    val = start_val;
    while (val / 2.0L > 0.0){
        val /= 2.0L;
    }
    printf("%s approx min positive = %Le\n", type_name, val);
}

int main(void) {
    printf("=== PART A: Using headers (limits.h and float.h) ===\n\n");

    printf("From limits.h:\n");
    printf("Signed char : min = %d, max = %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char : min = %d, max = %u\n", 0, UCHAR_MAX);

    printf("Signed short : min = %d, max = %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short: min = %d, max = %u\n", 0, USHRT_MAX);

    printf("Signed int : min = %d, max = %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int : min = %d, max = %u\n", 0, UINT_MAX);

    printf("Signed long : min = %ld, max = %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long : min = %d, max = %lu\n", 0, ULONG_MAX);

    printf("\nFrom float.h:\n");
    printf("float : min positive = %e, max = %e\n", FLT_MIN, FLT_MAX);
    printf("double : min positive = %e, max = %e\n", DBL_MIN, DBL_MAX);
    printf("long double: min positive = %Le, max = %Le\n", LDBL_MIN, LDBL_MAX);

    printf("\n=== PART B: Computed directly ===\n\n");

    // signed ranges

    cumpute_signed_range("char", NULL, 0);
    compute_signed_range("short", NULL, 0);
    compute_signed_range("int", NULL, 0);
    compute_signed_range("long", NULL, 0);

    // Unsigned ranges
    compute_unsigned_range("char", NULL, 0);
    compute_unsigned_range("short", NULL, 0);
    compute_unsigned_range("int", NULL, 0);
    compute_unsigned_range("long", NULL, 0);

    printf("\nFloating point (approximate computation: \n)");
    compute_float_range("float", 1.0f);
    compute_float_range("double", 1.0);
    compute_float_range("long double", 1.0L);

    return 0;
}