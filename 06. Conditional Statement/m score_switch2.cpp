/*
����:
switch���� ����Ͽ� 3���� ���迡 ���� ������ �Է¹޾� ����� ���ϼ���.
��� ������ 90�� �̻��̸� A����, 80�� �̻��̸� B����, 70�� �̻��̸� C����,
60�� �̻��̸� D����, 60�� �̸��̸� F�����Դϴ�.
��, ���� ����� ���� �� ���� �� �ϳ��� �����ϸ� F�����Դϴ�.
����1: �� �����̶� 40�� �̸�
����2: ����� 60�� �̸�

��� ����:
ù ��° ���������� �� ���ΰ���?
30
�� ��° ���������� �� ���ΰ���?
90
�� ��° ���������� �� ���ΰ���?
90
40���� ���� ���߽��ϴ�
����� F�����Դϴ�!
*/

#include <stdio.h>
int main()
{
    int first_score, second_score, third_score;
    char grade;
    float avg;

    printf("ù ��° ���������� �� ���ΰ���?\n");
    scanf("%d", &first_score);
    printf("�� ��° ���������� �� ���ΰ���?\n");
    scanf("%d", &second_score);
    printf("�� ��° ���������� �� ���ΰ���?\n");
    scanf("%d", &third_score);

    avg = (float)(first_score + second_score + third_score) / 3;

    if (first_score < 40 || second_score < 40 || third_score < 40)
    {
        printf("40���� ���� ���߽��ϴ�\n����� F�����Դϴ�!\n");
        return 0;
    }

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

    printf("����� ����� %.1f�Դϴ�\n", avg);
    printf("����� %c�����Դϴ�!\n", grade);

    return 0;
}