/*
문제:
1부터 100까지의 수 중 4의 배수만 출력하세요.
*/

#include <stdio.h>
int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 4 == 0)
            printf("%d\n", i);
    }

    return 0;
}