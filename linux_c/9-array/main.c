#include <stdio.h>

int main() {
    int a = 3;
    int b = 2;
    int array[3];
    array[0] = 1;
    array[1] = 10;
    array[2] = 100;
    int *p = &a;
    p[2];
    *p = 66;
    int i;
    for (i = 0; i < 6; i++) {
        printf("*p=%d\n", *p);
        if (i == 2) {
            p = p + 4;
        } else {
            p++;
        }
    }
    printf("-------------------------------------\n");
    p = &a;
    for (i = 0; i < 6; i++) {
        if (i > 2) {
            printf("p[%d]=%d\n", i + 3, p[i + 3]);
        } else {
            printf("p[%d]=%d\n", i, p[i]);
        }
    }
    return 0;
}
