/*
����:
AŸ�� ������ ĿƮ������ 80��, BŸ�� ������ ĿƮ������ 70���Դϴ�.
�� ���� ��� ĿƮ������ �Ѱ�ٸ� PASS, �׷��� ���ϴٸ� FAIL�� ����ϼ���

��� ����:
AŸ�� ���������� �� ���ΰ���?
40
BŸ�� ���������� �� ���ΰ���?
80
FAIL
*/

#include <stdio.h>
int main()
{
    int score_a, score_b;

    printf("AŸ�� ���������� �� ���ΰ���? \n");
    scanf("%d", &score_a);
    printf("BŸ�� ���������� �� ���ΰ���? \n");
    scanf("%d", &score_b);

    if (score_a >= 80 && score_b >= 70)
        printf("PASS\n");
    else
        printf("FAIL\n");

    return 0;
}