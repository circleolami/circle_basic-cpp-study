/*
문제:
1부터 100까지의 수 중 4의 배수만 출력하세요
*/

#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 4 == 0)
            printf("%d\n", i);
        i++;
    }
    return 0;
}