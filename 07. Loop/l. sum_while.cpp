/*
문제:
1부터 2023까지의 정수의 합은 얼마인지 while문을 사용하여 계산하세요.
*/

#include <stdio.h>
int main()
{
    int sum = 0, i = 1;

    while (i <= 2023)
    {
        sum += i;
        i++;
    }

    printf("%d", sum);

    return 0;
}