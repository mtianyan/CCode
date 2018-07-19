#include <stdio.h>
#define R 20
#define M int main(
#define N(n) n*10

int add(int a,int b){
    return a+b;
}


M){
    int a = R;
    printf("a =%d\n",a);
    printf("hello,world!\n");

    int b =N(a);
    printf("b = %d\n",b);
    
    int c =add(a,b);
    printf("c =%d\n",c);

    return 0;
}
