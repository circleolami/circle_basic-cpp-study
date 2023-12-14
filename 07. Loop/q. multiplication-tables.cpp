/*
문제:
2단부터 9단까지의 구구단을 출력하세요.
*/

#include <stdio.h>
int main()
{

    for (int i = 2; i <= 9; i++)
        for (int j = 1; j <= 9; j++)
            printf("%d * %d = %d\n", i, j, i * j);

    return 0;
}