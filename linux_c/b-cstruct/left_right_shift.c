#include <stdio.h>

int main() {
    // & | ^ ~ << >>

    int a = 3; //0000 0011
    a = a << 4; //0011 0000 32+16=48

    printf("a=%d\n", a);

    int i = 1; // 0000 0001
    i = i << 33; // 相当于i<<1
    printf("i=%d\n", i);
    // 当移位位数超过该数值类型的最大位数时，编译器会用移位位数去模该类型位数，然后按照余数进行移位。

    int b = 4;
    b = b >> 1;

    printf("b=%d\n", b);
    return 0;
}
