/*
문제:
두 정수를 입력받고, 크기를 비교하는 프로그램을 만드세요.

출력 예제:
첫 번째 정수를 입력하세요
4
두 번째 정수를 입력하세요
5
4 < 5는 1입니다.
*/

#include <stdio.h>
int main()
{
    int a, b;

    printf("첫 번째 정수를 입력하세요\n");
    scanf("%d", &a);
    printf("두 번째 정수를 입력하세요\n");
    scanf("%d", &b);
    printf("%d < %d는 %d입니다.", a, b, a < b);

    return 0;
}