/*
문제:
조건연산자를 사용하여 두 수를 입력받아 두 수 중 큰 수를 출력하는 프로그램을 만드세요.

출력 예제:
두 개의 서로 다른 정수를 입력하세요.
a = 10
b = 5
입력된 두 수 중 큰 값은 10입니다.
*/

#include <stdio.h>
int main()
{
    int a, b;

    printf("두 개의 서로 다른 정수를 입력하세요.\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("입력된 두 수 중 큰 값은 %d입니다.\n", a > b ? a : b);

    return 0;
}