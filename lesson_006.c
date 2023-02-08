#include <stdio.h>
#include <limits.h>

int main () {
    // int var1 = INT_MIN;
    // int var2 = INT_MAX;
    // printf("range of signed integer is from: %d to %d", var1, var2);
    // return 0;

    // unsigned int var1 = 0;
    // unsigned int var2 = UINT_MAX;
    // printf("range of unsigned int is from: %u to %u", var1, var2);
    // return 0;

    // short int var1 = SHRT_MIN;
    // short int var2 = SHRT_MAX;
    // printf("range of short int is from: %d to %d", var1, var2);
    // return 0;

    short unsigned int var1 = 0;
    short unsigned int var2 = USHRT_MAX;
    printf("range of short unsigned int is from: %u to %u", var1, var2);
    return 0;
}