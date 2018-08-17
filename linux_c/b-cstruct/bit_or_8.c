#include <stdio.h>

int main() {
    // & | ^ ~ << >>

    int a = 9; //1001
    int b = 5; //0101

    int c = a | b;//1101

    printf("%d\n", c);

    a = a | 0xff;

    printf("%d\n", a);
    return 0;
}
