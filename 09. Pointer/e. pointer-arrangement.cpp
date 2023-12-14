/*
문제:
정수형 변수 a, b, c를 선언하고 포인터 배열 x를 이용하여 정수형 변수 a와 b의 합을 c에 저장하세요.
*/

#include <stdio.h>
int main()
{
    int a, b, c;
    int *x[2];

    a = 5;
    b = 10;
    x[0] = &a;
    x[1] = &b;

    c = *x[0] + *x[1];

    printf("%d\n", c);

    return 0;
}