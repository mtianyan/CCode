#include <stdio.h>
void func(){
  printf("1\n");
  func();
  }

int main()
{
  func();
  return 0;
}
