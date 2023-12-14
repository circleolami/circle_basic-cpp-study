/*
문제: 3.76시간은 몇 시간, 분, 초인지 계산하는 프로그램을 만드세요.
*/

#include <stdio.h>
int main()
{
    float n = 3.76, temp;
    int hour, min, sec;

    temp = n * 3600;
    hour = temp / 3600;
    temp -= hour * 3600;
    min = temp / 60;
    temp -= min * 60;
    sec = temp;

    printf("%.2f시간은 %d시간 %d분 %d초입니다.\n", n, hour, min, sec);
    return 0;
}