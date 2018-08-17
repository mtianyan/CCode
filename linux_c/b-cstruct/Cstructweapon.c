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
    return 0;
}
