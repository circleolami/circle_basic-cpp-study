/*
문제:
1부터 2023까지의 짝수인 정수의 합은 얼마인지 for문을 사용하여 계산하세요.
*/

#include <stdio.h>
int main()
{
    int sum = 0;

    for (int i = 2; i <= 2023; i += 2)
        sum += i;

    printf("%d\n", sum);

    return 0;
}