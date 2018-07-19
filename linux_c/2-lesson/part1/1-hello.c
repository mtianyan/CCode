#include <stdio.h>
//#include "0-max.c"
int max(int a,int b);
int min(int a,int b);

int main()
{
    int a1 = 33;
    int a2 = 21;
    int maxNum = max(a1,a2); 
    int minNum = min(a1,a2);
    printf("the max value is %d\n",maxNum); 
    printf("the min value is %d\n",minNum);
    return 0;
}

