#include <stdio.h>
#include <stdlib.h>

extern int a;
// extern int a = 9;
int main() {
    printf("%d", a);
    return 0;
}