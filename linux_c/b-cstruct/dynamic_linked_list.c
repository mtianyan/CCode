#include <stdio.h>
#include <malloc.h>

struct weapon {
    int price;
    int atk;
    struct weapon *next;
};

// 需要一个创建链表的函数，返回值是链表的头指针，返回类型是struct weapon *
struct weapon *create() {
    struct weapon *head;
    struct weapon *p1, *p2; // 3个指针都用来指向struct weapon类型数据,p1,p2分别指向当前新创建的节点和上一个节点。
    int n = 0;// 临时变量，记录当前链表中节点个数
    // malloc分配内存块的函数，sizeof判断数据类型长度符
    // (int)malloc(16) 分配16个int型内存块
    p1 = p2 = (struct weapon *) malloc(sizeof(struct weapon));

    // 从键盘输入数据，给第一个节点。
    scanf("%d,%d", &p1->price, &p1->atk);
    head = NULL;// 一开始链表不存在，置空

    while (p1->price != 0) { // 约定price为0时停止输入
        n++;
        if (n == 1) head = p1;
        else p2->next = p1;

        p2 = p1; // 保留p1当前所指向的的地址，保留上一个节点。

        //需要开辟一个新的动态存储区，把这个的地址载给p1
        p1 = (struct weapon *) malloc(sizeof(struct weapon));
        scanf("%d,%d", &p1->price, &p1->atk);//开辟后输入数据
    }
    p2->next = NULL;
    return (head);
}//p1,p2一个用来指向链表新创立的节点，一个用来指向下一个节点
int main() {
    struct weapon *p;
    p = create(); // p成为链表的头指针
    // printf("%d,%d\n",p->price,p->atk);//打印第一个节点的信息
    while (p != NULL) {
        printf("%d,%d\n", p->atk, p->price);
        p = p->next;
    }
    return 0;
}
