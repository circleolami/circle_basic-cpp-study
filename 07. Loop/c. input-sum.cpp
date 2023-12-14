/*
문제:
숫자를 입력받아 1부터 입력받은 숫자까지 합을 구하는 프로그램을 만드세요.
for문, 함수를 사용하세요.
*/

#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("수를 입력하세요\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

    return 0;
}