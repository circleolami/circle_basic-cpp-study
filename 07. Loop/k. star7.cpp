/*
문제:
아래 그림과 같이 별을 출력하세요

출력 예제:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
            printf(" ");
        for (int k = 0; k <= i * 2; k++)
            printf("*");
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < 10 - 2 * (i + 1) + 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}