/*
문제:
입력받은 수가 홀수면 "홀수입니다", 짝수이면 "짝수입니다" 라고 출력하는 프로그램을 만드세요.

출력 예제:
정수를 입력하세요 10
짝수입니다
*/

#include <stdio.h>
int main()
{
    int n;

    printf("정수를 입력하세요 ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("짝수입니다\n");
    else
        printf("홀수입니다\n");

    return 0;
}