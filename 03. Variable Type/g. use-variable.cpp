/*
문제:
int 변수 a, b를 선언하여 a는 7, b는 5로 초기화하세요.
a의 값을 출력하세요.
b의 값을 출력하세요.
a와 b를 더한 값을 출력하세요.
a와 b의 값을 서로 바꾸세요.
a의 값을 출력하세요.
b의 값을 출력하세요.

출력 예제:
a의 값은 7이다.
b의 값은 5이다.
a와 b를 더한 값은 12이다.
a와 b의 값을 서로 바꾸겠습니다.
a의 값은 5이다.
b의 값은 7이다.
*/

#include <stdio.h>
int main()
{
    int a = 7, b = 5, temp = 0;

    printf("a의 값은 %d이다.\n", a);
    printf("b의 값은 %d이다.\n", b);
    printf("a와 b를 더한 값은 %d이다.\n", a + b);
    printf("a와 b의 값을 서로 바꾸겠습니다.\n");

    temp = a;
    a = b;
    b = temp;

    printf("a의 값은 %d이다.\n", a);
    printf("b의 값은 %d이다.\n", b);

    return 0;
}