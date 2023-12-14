/*
문제:
구구단 중 홀수단만 출력되는 프로그램을 만드세요.
*/

#include <stdio.h>
int main()
{

    for (int i = 3; i <= 9; i++)
    {
        if (i % 2 == 0)
            continue;
        for (int j = 1; j <= 9; j++)
            printf("%d * %d = %d\n", i, j, i * j);
    }

    return 0;
}