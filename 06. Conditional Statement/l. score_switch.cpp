/*
문제:
switch문을 사용하여 3번의 시험에 대한 점수를 입력받아 평균을 구하세요.
평균 점수가 90점 이상이며 A학점, 80점 이상이면 B학점, 70점 이상이면 C학점,
60점 이상이면 D학점, 60점 미만이면 F학점입니다.

출력 예제:
첫 번째 시험점수는 몇 점인가요?
80
두 번째 시험점수는 몇 점인가요?
90
세 번째 시험점수는 몇 점인가요?
20
당신의 평균은 63.3점입니다.
당신은 D학점입니다!
*/

#include <stdio.h>
int main()
{
    int first_score, second_score, third_score;
    char grade;
    float avg;

    printf("첫 번째 시험점수는 몇 점인가요?\n");
    scanf("%d", &first_score);
    printf("두 번째 시험점수는 몇 점인가요?\n");
    scanf("%d", &second_score);
    printf("세 번째 시험점수는 몇 점인가요?\n");
    scanf("%d", &third_score);

    avg = (float)(first_score + second_score + third_score) / 3;

    switch ((int)avg / 10)
    {
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F';
    }

    printf("당신의 평균은 %.1f입니다\n", avg);
    printf("당신은 %c학점입니다!\n", grade);

    return 0;
}