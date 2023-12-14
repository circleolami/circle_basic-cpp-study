/*
문제:
배열을 이용하여 학생 5명의 시험점수를 입력받고 평균을 구하시오.

출력 예제:
첫 번째 학생의 시험점수를 입력하세요 80
두 번째 학생의 시험점수를 입력하세요 90
세 번째 학생의 시험점수를 입력하세요 70
네 번째 학생의 시험점수를 입력하세요 80
다섯 번째 학생의 시험점수를 입력하세요 80
5명 학생의 평균은 80입니다.
*/

#include <stdio.h>
int main()
{
    int score[5];
    float avg = 0;

    printf("첫 번째 학생의 시험점수를 입력하세요 ");
    scanf("%d", &score[0]);
    printf("두 번째 학생의 시험점수를 입력하세요 ");
    scanf("%d", &score[1]);
    printf("세 번째 학생의 시험점수를 입력하세요 ");
    scanf("%d", &score[2]);
    printf("네 번째 학생의 시험점수를 입력하세요 ");
    scanf("%d", &score[3]);
    printf("다섯 번째 학생의 시험점수를 입력하세요 ");
    scanf("%d", &score[4]);

    for (int i = 0; i < 5; i++)
        avg += (float)score[i];

    avg /= 5;
    printf("5명 학생의 평균은 %.0f입니다.", avg);

    return 0;
}