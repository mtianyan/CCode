#include <stdio.h>

int main()
{
   // & | ^ ~ << >>

   int a =4;//0100
   int b =7;//0111

   int c =a&1;//0100

   int d =b&1;//0100

   printf("%d\n",c);
   printf("%d\n",d);
   return 0;
}
