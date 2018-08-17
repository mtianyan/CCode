#include <stdio.h>

int main() {
    char str[] = "hello";
    char *str2 = "world";
    char str3[10];
    // char str4[]={'h','e','l','l','o'};
    // int len = sizeof(str4) / sizeof(char);
    printf("input the value\n");
    //scanf("%s",str3);
    //scanf("%s",str);
    scanf("%s", str3);
    printf("str is %s\n", str);
    printf("str2 is %s\n", str2);
    printf("str3 is %s\n", str3);
}
