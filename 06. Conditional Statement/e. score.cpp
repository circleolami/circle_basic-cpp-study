/*
문제:
점수를 입력받아 90점 이상은 A학점, 80점 이상은 B학점, 70점 이상은 C학점,
70점 미만은 F학점이라고 출력하는 프로그램을 만드세요.

출력 예제:
당신의 시험점수는 몇 점인가요?
89
당신은 B학점입니다!
*/

#include <stdio.h>
int main()
{
    int score;
    char grade;

    printf("당신의 시험점수는 몇 점인가요? \n");
    scanf("%d", &score);

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else
        grade = 'F';

    printf("당신은 %c학점입니다!\n", grade);

    return 0;
}