/*
문제:
함수를 사용하여 입력받은 cm을 m로 변환하여 출력하는 프로그램을 만드세요.
결과는 소수점 둘째자리까지 출력하세요.

출력 예제:
cm을 m로 변환해드릴게요.
당신의 키를 cm 단위로 입력하세요.
187
결과: 1.87m
*/

#include <stdio.h>
int main()
{
    float height;

    printf("cm를 m로 변환해드릴게요.\n");
    printf("당신의 키를 cm 단위로 입력하세요.\n");
    scanf("%f", &height);
    printf("결과: %.2fm\n", height * 0.01);

    return 0;
}