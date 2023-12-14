/*
문제:
입력받은 수가 음수이면 해당 수를 양수로 바꾸어주는 프로그램을 만드세요

출력 예제:
정수를 입력하세요 3
결과는 3.0
*/

#include <stdio.h>
int main()
{
    float n;

    printf("정수를 입력하세요 ");
    scanf("%f", &n);

    if (n < 0)
        n = -n;

    printf("결과는 %.1f", n);

    return 0;
}