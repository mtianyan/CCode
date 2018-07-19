#include <stdio.h>
#define R 20
#define M int main(
#define N(n) n*10
#define ADD(a,b) a+b
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

    int d =ADD(a,b);
    printf("d =%d\n",d);
    
    return 0;
}
