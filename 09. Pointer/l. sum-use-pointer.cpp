/*
문제:
길이가 5인 int형 배열 a를 선언하고 1~5로 초기화하라.
이 배열의 마지막 요소를 가리키는 포인터 b를 선언하고 이 변수 b에 저장된 값을 감소시키는 형태의 연산을 기반으로 배열요소에 접근하여 배열요소의 값을 모두 더한 결과를 출력하라.

출력 예제:
배열
1 2 3 4 5
합: 15
*/

#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *b;
    int sum = 0;

    b = a;

    printf("배열\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(b + i));
        sum += *(b + i);
    }
    printf("\n");
    printf("합: %d\n", sum);

    return 0;
}