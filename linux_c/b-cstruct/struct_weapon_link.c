#include <stdio.h>

struct weapon {
    int price;
    int atk; // 节点的数据部分

    struct weapon *next; // 下一节点的地址
};

int main() {
    struct weapon a, b, c, *head; // 除过三个武器，还要定义一个头指针
    a.price = 100;
    a.atk = 100;
    b.price = 200;
    b.atk = 200;
    c.price = 300;
    c.atk = 300;

    // 连接成链表
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    struct weapon *p;
    p = head;
    while (p != NULL) {
        printf("%d,%d\n", p->atk, p->price);
        p = p->next;
    }
}

