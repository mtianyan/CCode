#include <stdio.h>

int main() {
    char str[] = "hello";
    char *str2 = "world";
    char str3[10];
    printf("input the value\n");
    str[3] = '\0';
    scanf("%s", str3);
    int i = 0;
    for (i = 0; i < 6; i++) {
        printf("%c\n", str[i]);
    }
    printf("str is %s\n", str);
    printf("str2 is %s\n", str2);
    printf("str3 is %s\n", str3);
}
