/*
문제:
정수를 입력받아 그 수에 해당하는 구구단을 출력하는 프로그램을 만드세요.
*/

#include <stdio.h>
int main()
{
    int n;

    printf("수를 입력하세요 ");
    scanf("%d", &n);

    for (int i = 1; i <= 9; i++)
        printf("%d * %d = %d\n", n, i, n * i);

    return 0;
}