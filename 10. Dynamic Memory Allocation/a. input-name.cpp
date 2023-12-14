/*
문제:
이름을 물어보고 사용자로부터 입력받아 이를 저장하고 화면에 출력하는 프로그램을 함수를 사용하여 만드세요.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *isName();

int main()
{
    char *name;
    name = isName();

    if (name != NULL)
    {
        printf("이름: %s\n", name);
        free(name);
    }
    else
        printf("메모리 할당에 실패했습니다.\n");

    return 0;
}

char *isName()
{
    char *name = (char *)malloc(sizeof(char) * 50);
    if (name == NULL)
    {
        return NULL;
    }

    printf("당신의 이름을 입력해주세요: ");
    fgets(name, 50, stdin);

    name[strcspn(name, "\n")] = '\-';

    return name;
}