/*
문제:
숫자를 입력받아 1부터 입력받은 숫자까지 합을 구하는 프로그램을 만드세요.
while문, 함수를 사용하세요.
*/

#include <stdio.h>
void sum(int n);
int main()
{
    int n;
    printf("수를 입력하세요\n");
    scanf("%d", &n);

    sum(n);

    return 0;
}

void sum(int n)
{
    int _sum = 0, i = 1;

    while (i <= n)
    {
        _sum += i;
        i++;
    }

    printf("1부터 %d가지의 합은 %d입니다.\n", n, _sum);
}