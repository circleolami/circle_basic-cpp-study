/*
문제:
1부터 2023까지의 정수의 합은 얼마인지 for문을 사용하여 계산하세요.
*/

#include <stdio.h>
int main()
{
    int sum = 0;

    for (int i = 1; i <= 2023; i++)
        sum += i;

    printf("%d", sum);

    return 0;
}