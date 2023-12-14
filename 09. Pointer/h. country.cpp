/*
나라 이름 4개를 입력받아 2차원 배열에 저장하고 출력해보세요.

출력 예제:
나라 이름을 4개 입력하세요
Korea
China
America
Japan

입력하신 나라는 아래와 같습니다.
Korea
China
America
Japan
*/

#include <stdio.h>
int main()
{
    char nation[4][9];

    printf("나라 이름을 4개 입력하세요\n");
    scanf("%s %s %s %s", nation[0], nation[1], nation[2], nation[3]);
    printf("\n입력하신 나라는 아래와 같습니다.\n");
    for (int i = 0; i < 4; i++)
        printf("%s\n", nation[i]);

    return 0;
}