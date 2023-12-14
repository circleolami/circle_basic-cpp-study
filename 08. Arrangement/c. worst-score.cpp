/*
문제:
5개 과목 성적을 배열로 입력받아 최저 성적을 구하세요.

출력 예제:
1번째 성적을 입력하세요 10
2번째 성적을 입력하세요 30
3번째 성적을 입력하세요 40
4번째 성적을 입력하세요 50
5번째 성적을 입력하세요 60
최저 성적은 1번째 성적인 10입니다.
*/

#include <stdio.h>
#define MAX_INT 2147483647
int main()
{
    int score[5];
    int min_index, min_score = MAX_INT;

    for (int i = 0; i < 5; i++)
    {
        printf("%d번째 성적을 입력하세요 ", i + 1);
        scanf("%d", &score[i]);
        if (min_score > score[i])
        {
            min_score = score[i];
            min_index = i;
        }
    }

    printf("최저 성적은 %d번째 성적인 %d입니다.\n", min_index + 1, min_score);

    return 0;
}