/*
문제:
입력받은 수를 양수, 음수, 0으로 구분하는 프로그램을 만드세요.

출력 예제:
정수를 입력하세요 10
입력된 수는 양수입니다
*/

#include <stdio.h>

int main()
{
    int n;

    printf("정수를 입력하세요 ");
    scanf("%d", &n);

    if (n > 0)
        printf("입력된 수는 양수입니다.\n");
    else if (n < 0)
        printf("입력된 수는 음수입니다.\n");
    else
    
        printf("입력된 수는 0입니다.\n");

    return 0;
}