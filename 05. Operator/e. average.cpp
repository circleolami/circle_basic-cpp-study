/*
문제:
세 과목의 점수의 평균을 구하는 프로그램을 만드세요.
평균은 소수점 이하 두 번째 자리까지 출력하세요.

출력 예제:
국어 점수: 80
영어 점수: 90
수학 점수: 90
평균: 86.67
*/

#include <stdio.h>
int main()
{
    float korean, english, math, sum = 0;

    printf("국어 점수: ");
    scanf("%f", &korean);
    printf("영어 점수: ");
    scanf("%f", &english);
    printf("수학 점수: ");
    scanf("%f", &math);

    sum = (korean + english + math) / 3;

    printf("평균: %.2f\n", sum);

    return 0;
}