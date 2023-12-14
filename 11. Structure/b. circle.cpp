/*
문제:
한 점과 반지름을 기준으로 원 구조체를 정의해보세요.
*/

#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct Circle
{
    struct point a;
    int r;
};

int main()
{
    struct Circle c;

    c.a.x = 3;
    c.a.y = 7;
    c.r = 5;

    return 0;
}