#include <stdio.h>

#define R 10
#define M int main(
#define N(n) n*10


M) {
    int a = R;
    int b = N(a);
    printf("b = %d\n", b);
    printf("a =%d\n", a);
    printf("hello,world!\n");
    return 0;
}
