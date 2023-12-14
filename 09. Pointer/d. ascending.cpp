/*
문제:
수 3개를 입력받아 오름차순으로 정렬하여 출력하는 프로그램을 함수를 사용하여 만드세요.

출력 예제:
수 3개를 차례로 입력하세요 3
7
1
정렬 결과는 1, 3, 7입니다.
*/

#include <stdio.h>

void swap(int *x, int *y);
void line_down(int *x, int *y, int *z);

int main()
{
    int max, mid, min;

    printf("수 3개를 차례로 입력하세요");
    scanf("%d%d%d", &min, &mid, &max);
    line_down(&min, &mid, &max);
    printf("정렬 결과는 %d, %d, %d입니다.\n", min, mid, max);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

void line_down(int *x, int *y, int *z)
{
    if (*x > *y)
        swap(x, y);
    if (*x > *z)
        swap(x, z);
    if (*y > *z)
        swap(y, z);
}