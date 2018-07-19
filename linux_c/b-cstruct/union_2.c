#include <stdio.h>
struct data{
    int a;
    char b;
    int c;
};
int main(){
   // union data data_1;
   //data_1.b ='C';
   // data_1.a =10;
   printf("%lu\n",sizeof(struct data));

   return 0;
}
