#include <stdio.h>

int main()
{
   // & | ^ ~ << >>

   int a = 4; //0100 int占用4字节，32位补码。
   int b = 7; //0111

   int c = a&b; //0100 逻辑与运算

   printf("%d\n",c);
   return 0;
}
