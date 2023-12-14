/*
문제:
포인터의 값을 바꾸어주는 함수를 이중 포인터를 사용하여 만드세요.
*/

#include <stdio.h>
int main()
{
    int a = 3;
    int *b = &a;
    int **c = &b;

    printf("a의 값: %d\n", a);
    printf("a의 주소 값: %d\n", &a);
    printf("b의 값: %d\n", b);
    printf("b의 주소 값: %d\n", &b);
    printf("c의 값: %d\n", c);
    printf("c의 주소 값: %d\n", &c);

    printf("b의 역참조값: %d\n", *b);
    printf("c의 역참조값: %d\n", *c);
    printf("c의 역참조의 역참조값: %d\n", **c);

    return 0;
}