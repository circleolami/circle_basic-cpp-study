/*
문제:
문자형 변수 a를 선언하여 'A'를 저장하세요.
변수 a를 가리키는 포인터변수 b를 선언하고 이 포인터 변수를 통해 a의 값을 'B'로 변경하세요.

출력 예제:
현재 a의 값은 A
변경된 a의 값은 B
b의 값은 2105276036
*/

#include <stdio.h>
int main()
{
    char a;
    char *b;

    a = 'A';

    printf("현재 a의 값은 %c\n", a);
    b = &a;
    *b = 'B';
    printf("변경된 a의 값은 %c\n", a);
    printf("b의 값은 %d\n", b);

    return 0;
}