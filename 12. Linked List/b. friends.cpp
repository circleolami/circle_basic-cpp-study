/*
문제:
친구의 이름, 나이를 저장하는 구조체를 연결리스트로 만들고 출력하세요.
*/

#include <stdio.h>

struct friends
{
    char *name;
    int age;
    struct friends *next;
};

int main()
{
    struct friends a, b, c, d, e;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    a.age = 10;
    a.name = "박초은";

    b.age = 11;
    b.name = "이민호";

    c.age = 13;
    c.name = "장민지";

    d.age = 14;
    d.name = "오세은";

    e.age = 16;
    e.name = "유예진";

    struct friends *p;

    for (p = &a; p != NULL; p = p->next)
        printf("이름: %s, 나이: %d\n", p->name, p->age);

    return 0;
}