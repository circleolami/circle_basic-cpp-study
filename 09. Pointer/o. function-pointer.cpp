/*
문제:
사용자의 선택에 따라 두 수의 합, 곱, max 값을 구하는 프로그램을 함수 포인터를 사용해서 만드세요.

출력 예제:
1: 합 / 2: 곱 / 3: 비교(큰 값 구하기)
3
두 정수의 값을 입력하세요 2
결과: 4
*/

#include <stdio.h>
#include <stdlib.h>

int _sum(int a, int b);
int _mul(int a, int b);
int _max(int a, int b);
void select(int (*fp)(int, int));
int main()
{
    int sel;

    printf("1: 합 / 2: 곱 / 3: 비교 (큰 값 구하기)\n");
    scanf("%d", &sel);
    if (sel == 1)
        select(_sum);
    else if (sel == 2)
        select(_mul);
    else if (sel == 3)
        select(_max);
    else
        printf("잘못된 값을 입력하셨어요");
    return 0;
}

int _sum(int a, int b)
{
    return (a + b);
}
int _mul(int a, int b)
{
    return (a * b);
}

int _max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void select(int (*fp)(int, int))
{
    int a, b, result;
    printf("두 정수의 값을 입력하세요");
    scanf("%d%d", &a, &b);
    result = fp(a, b);
    printf("결과: %d", result);
}