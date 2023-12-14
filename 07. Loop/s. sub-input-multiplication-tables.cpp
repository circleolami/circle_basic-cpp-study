/*
문제:
정수를 입력받아 그 수에 해당하는 구구단만 제외하고 출력하는 프로그램을 만드세요.
*/

#include <stdio.h>
int main()
{
    int n;

    printf("몇 단을 제외할까요? ");
    scanf("%d", &n);

    for (int i = 2; i <= 9; i++)
    {
        if (i == n)
            continue;
        for (int j = 1; j <= 9; j++)
            printf("%d * %d = %d\n", i, j, i * j);
    }

    return 0;
}