/*
문제:
5개 과목 성적을 배열로 입력받아 최고 성적을 구하세요.

출력 예제:
1번째 성적을 입력하세요 90
2번째 성적을 입력하세요 80
3번째 성적을 입력하세요 100
4번째 성적을 입력하세요 20
5번째 성적을 입력하세요 30
최고 성적은 3번째 성적인 100입니다.
*/

#include <stdio.h>
int main()
{
    int score[5];
    int max_index, max_score = -999;

    for (int i = 0; i < 5; i++)
    {
        printf("%d번째 성적을 입력하세요 ", i + 1);
        scanf("%d", &score[i]);
        if (max_score < score[i])
        {
            max_score = score[i];
            max_index = i;
        }
    }

    printf("최고 성적은 %d번째 성적인 %d입니다.\n", max_index + 1, max_score);

    return 0;
}