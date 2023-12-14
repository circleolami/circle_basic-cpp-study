/*
문제:
영문 이름을 포인터를 통해 저장한 다음 포인터 변수로 접근하여 각 영문 철자를 하나씩 출력하는 프로그램을 만드세요.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name[30] = "abc";
    for (int i = 0; i < strlen(name); i++)
        printf("%c\n", *(name + i));

    return 0;
}