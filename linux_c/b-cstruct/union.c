#include <stdio.h>
union data{
    int a;
    char b;
    int c;
}; // 代表a,b,c会只在同一个内存空间。

int main()
{
   union data data_1;
   data_1.b ='C';
   data_1.a =10; // 后面被赋值的成员才是真正起作用的成员
   return 0;
}
