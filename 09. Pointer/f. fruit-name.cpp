/*
문제:
과일 이름을 포인터형 배열에 저장하고 출력하세요.

출력 예제:
banana
apple
melon
orange
tomato
*/

#include <stdio.h>
int main()
{
    char *fruits[5] = {"banana", "apple", "melon", "orange", "tomato"};

    for (int i = 0; i < 5; i++)
        printf("%s\n", fruits[i]);

    return 0;
}