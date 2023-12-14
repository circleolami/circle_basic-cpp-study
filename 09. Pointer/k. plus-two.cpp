/*
문제:
길이가 5인 int형 배열 a를 선언하고 1~5로 초기화하라.
이 배열의 첫 번째 요소를 가리키는 포인터 b를 선언하고 이 변수 b에 저장된 값을 증가시키는 형태의 연산을 기반으로 배열요소에 접근하여 배열 요소의 값을 2씩 증가시키고 출력하라.

출력 예제:
포인터 연산 전
1 2 3 4 5
포인터 연산 후
3 4 5 6 7
*/

#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *b;

    b = a;

    printf("포인터 연산 전\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(b + i));
    printf("\n");

    printf("포인터 연산 후\n");
    for (int i = 0; i < 5; i++)
        *(b + i) = *(b + i) + 2;

    for (int i = 0; i < 5; i++)
        printf("%d ", *(b + i));
    printf("\n");

    return 0;
}