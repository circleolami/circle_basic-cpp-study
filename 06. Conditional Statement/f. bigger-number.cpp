/*
문제:
두 개의 정수를 입력받아 큰 수를 출력하는 프로그램을 만드세요.
이 때, 큰 수를 결정하는 것에 함수를 사용하세요.

출력 예제:
첫 번째 수를 입력하세요
4
두 번째 수를 입력하세요
10
큰 수는 10입니다
*/

#include <stdio.h>
void bigger_number(int n, int m);

int main()
{
    int n, m;
    printf("첫 번째 수를 입력하세요\n");
    scanf("%d", &n);
    printf("두 번째 수를 입력하세요\n");
    scanf("%d", &m);
    bigger_number(n, m);
    return 0;
}

void bigger_number(int n, int m)
{
    int ans;

    if (n > m)
        ans = n;
    else
        ans = m;

    printf("큰 수는 %d입니다\n", ans);
}
