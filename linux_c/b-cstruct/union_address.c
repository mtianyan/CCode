#include <stdio.h>

union data {
    int a;
    char b;
    int c;
}; // 代表a,b,c会只在同一个内存空间。

int main() {
    union data data_1;
    data_1.b = 'C';
    data_1.a = 10;
    printf("%p\n%p\n%p\n", &data_1.a, &data_1.b, &data_1.c);
    return 0;
}
