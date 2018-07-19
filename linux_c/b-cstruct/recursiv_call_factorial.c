#include <stdio.h>
int func(int n)
{
    int r =0;
    if(n<0){
	  printf("error");
    }else if(n==0 || n==1){
    return 1;
    }else{
        r =n *func(n-1);
        return r;
    }
 }

int main()
{
   int n =0;
   printf("please input the num:");
   scanf("%d",&n);
   // 使用func求阶乘
   int result = func(n);
   printf("the result is %d\n",result);
   return 0;
}
