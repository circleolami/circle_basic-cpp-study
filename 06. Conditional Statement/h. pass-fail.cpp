/*
문제:
A타입 시험의 커트라인은 80점, B타입 시험의 커트라인은 70점입니다.
두 시험 모두 커트라인을 넘겼다면 PASS, 그렇지 못하다면 FAIL을 출력하세요

출력 예제:
A타입 시험점수는 몇 점인가요?
40
B타입 시험점수는 몇 점인가요?
80
FAIL
*/

#include <stdio.h>
int main()
{
    int score_a, score_b;

    printf("A타입 시험점수는 몇 점인가요? \n");
    scanf("%d", &score_a);
    printf("B타입 시험점수는 몇 점인가요? \n");
    scanf("%d", &score_b);

    if (score_a >= 80 && score_b >= 70)
        printf("PASS\n");
    else
        printf("FAIL\n");

    return 0;
}