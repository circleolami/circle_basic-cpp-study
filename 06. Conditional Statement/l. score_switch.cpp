/*
����:
switch���� ����Ͽ� 3���� ���迡 ���� ������ �Է¹޾� ����� ���ϼ���.
��� ������ 90�� �̻��̸� A����, 80�� �̻��̸� B����, 70�� �̻��̸� C����,
60�� �̻��̸� D����, 60�� �̸��̸� F�����Դϴ�.

��� ����:
ù ��° ���������� �� ���ΰ���?
80
�� ��° ���������� �� ���ΰ���?
90
�� ��° ���������� �� ���ΰ���?
20
����� ����� 63.3���Դϴ�.
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