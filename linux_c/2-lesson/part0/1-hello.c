#include <stdio.h>
#include "0-max.c"

int main() {
    int a1 = 33;
    int a2 = 21;
    int maxNum = max(a1, a2);
    printf("the max value is %d\n", maxNum);
    return 0;
}

