/*
����:
if���� ����Ͽ� 3���� ���迡 ���� ������ �Է¹޾� ����� ���ϼ���.
��� ������ 90�� �̻��̸� A����, 80�� �̻��̸� B����, 70�� �̻��̸� C����,
60�� �̻��̸� D����, 60�� �̸��̸� F�����Դϴ�.

��� ����:
ù ��° ���������� �� ���ΰ���?
80
�� ��° ���������� �� ���ΰ���?
90
�� ��° ���������� �� ���ΰ���?
20
����� ����� 63.3���Դϴ�
����� D�����Դϴ�!
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

    if (avg >= 90)
        grade = 'A';
    else if (avg >= 80)
        grade = 'B';
    else if (avg >= 70)
        grade = 'C';
    else if (avg >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("����� ����� %.1f�Դϴ�\n", avg);
    printf("����� %c�����Դϴ�!\n", grade);

    return 0;
}