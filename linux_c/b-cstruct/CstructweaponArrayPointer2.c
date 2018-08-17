#include <stdio.h>

struct weapon {
    // 武器名字
    char name[20];
    // 攻击力
    int atk;
    // 价格
    int price;
};

int main() {
    int a = 0;
    float b = 0.0;

    struct weapon weapon_1 = {"weapon_name", 100, 200};
    printf("%s\n%d\n", weapon_1.name, ++weapon_1.price);

    struct weapon *w;
    w = &weapon_1;
    printf("------------------------------\n");
    printf("name=%s\nname=%s\nname=%s\n", (*w).name, w->name, weapon_1.name);

    struct weapon weapon_2[2] = {{"weapon_name1", 50, 100},
                                 {"weapon_name2", 99, 200}};
    struct weapon *p;
    p = weapon_2; // 取值: p->name weapon_2[0].name
    printf("%s\n", p->name);
    printf("---------------------------------\n");
    p++;
    printf("%s\n", p->name);

    return 0;
}
