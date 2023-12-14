/*
문제:
for 반복문을 사용하여 i가 6 이상이면 멈추고, i가 짝수일 때만 i의 값을 출력하는 프로그램을 만드세요.

출력 예제:
0
2
4
*/

#include <stdio.h>
int main()
{
    for (int i = 0;; i++)
    {
        if (i < 6 && i % 2 == 0)
            printf("%d\n", i);
        if (i >= 6)
            break;
    }

    return 0;
}