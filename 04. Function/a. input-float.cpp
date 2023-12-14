/*
문제:
실수를 입력받는 프로그램을 만드세요.

출력 예제:
실수를 입력하세요
3.5
당신이 입력한 실수는 3.500000입니다.
*/

#include <stdio.h>
int main()
{
    float f;

    printf("실수를 입력하세요\n");
    scanf("%f", &f);
    printf("당신이 입력한 실수는 %f입니다\n", f);

    return 0;
}