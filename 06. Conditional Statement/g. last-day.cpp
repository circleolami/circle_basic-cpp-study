/*
문제:
switch문을 이용하여 입력된 월의 마지막 날을 출력하는 프로그램을 만드세요.

출력 예제:
월을 입력하세요
3
3월은 31일까지 있습니다
*/

#include <stdio.h>
int main()
{
    int n;

    printf("월을 입력하세요\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d월은 31일까지 있습니다\n", n);
        break;
    case 2:
        printf("%d월은 28일까지 있습니다\n", n);
        break;
    default:
        printf("%d월은 30일까지 있습니다\n", n);
    }
    return 0;
}