#include <stdio.h>

int main()
{
   // & | ^ ~ << >>

   int a =9; //1001
   int b =5; //0101

   a= a^b;
   b= b^a;
   a= a^b;
   printf("%d\n%d\n",a,b);
   return 0;
}
