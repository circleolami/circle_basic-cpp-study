/*
문제:
크기가 10인 배열 a를 생성하고 1부터 10까지의 숫자를 차례대로 저장하세요.
배열 a를 참조하는 포인터 b 변수를 생성하고 차례대로 배열 a를 참조하면서 출력하는 프로그램을 두 가지 방법으로 만드세요.
*/

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *b;

    b = a;

    printf("첫 번째 방법\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("두 번째 방법\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", *(b + i));

    return 0;
}