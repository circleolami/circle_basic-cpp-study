/*
문제:
0을 입력할 때까지 무한반복하여 두 수를 입력받고 두 수의 곱을 출력하는 프로그램을 만드세요.
두 수의 곱을 구하는 코드는 함수로 구현하세요.

출력 예제:
프로그램을 멈추려면 숫자 0을 입력하세요
첫 번째 수를 입력하세요 2
두 번째 수를 입력하세요 3
두 수 2, 3의 곱은 6입니다.
프로그램을 멈추려면 숫자 0을 입력하세요
첫 번째 수를 입력하세요 4
두 번째 수를 입력하세요 5
두 수 4, 5의 곱은 20입니다.
프로그램을 멈추려면 숫자 0을 입력하세요
첫 번째 수를 입력하세요 0
프로그램을 종료합니다.
*/

#include <stdio.h>
int multiple(int a, int b);

int main()
{
    int a, b;

    while (1)
    {
        printf("프로그램을 멈추려면 숫자 0을 입력하세요\n");
        printf("첫 번째 수를 입력하세요 ");
        scanf("%d", &a);
        if (a == 0)
            break;
        printf("두 번째 수를 입력하세요 ");
        scanf("%d", &b);
        if (b == 0)
            break;
        printf("두 수 %d, %d의 곱은 %d입니다.\n", a, b, multiple(a, b));
    }
    printf("프로그램을 종료합니다.\n");

    return 0;
}

int multiple(int a, int b)
{
    return a * b;
}