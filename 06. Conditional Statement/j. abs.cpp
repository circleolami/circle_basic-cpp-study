/*
문제:
두 수를 입력받아 절댓값이 큰 수를 출력하는 프로그램을 만드세요.
단, 절댓값을 구하는 함수를 사용하세요.
*/

#include <stdio.h>
int abs(int n);
int main()
{
    int a, b;
    printf("두 수를 입력하세요\n");
    scanf("%d %d", &a, &b);
    if (abs(a) > abs(b))
        printf("절댓값이 큰 수는 %d입니다.\n", a);
    else
        printf("절댓값이 큰 수는 %d입니다.\n", b);

    return 0;
}

int abs(int n)
{
    if (n < 0)
        return -n;
    return n;
}