/*
문제:
문자열을 입력받고 두 개를 서로 교환하여 출력하세요.

출력 예제:
문자열 입력: apple banana
입력된 문자열(바꾸기 전): apple banana
입력된 문자열(바꾸기 후): banana apple
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    char temp[80];

    printf("문자열 입력: ");
    scanf("%s %s", str1, str2);
    printf("입력된 문자열(바꾸기 전): %s, %s\n", str1, str2);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("입력된 문자열(바꾸기 후): %s, %s\n", str1, str2);

    return 0;
}