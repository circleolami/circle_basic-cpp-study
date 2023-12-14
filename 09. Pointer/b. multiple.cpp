/*
문제:
입력받는 수를 2배하여 출력하는 프로그램을 함수를 이용하여 작성하세요.

출력 예제:
수를 입력하세요 2
입력한 수의 2배는 4입니다.
*/

#include <stdio.h>
void multiple(int *n);

int main()
{
    int n;
    printf("수를 입력하세요 ");
    scanf("%d", &n);

    multiple(&n);
    printf("입력한 수의 2배는 %d입니다.\n", n);

    return 0;
}

void multiple(int *n)
{
    *n = (*n) * 2;
}