/*
����:
������ �Է¹޾� 90�� �̻��� A����, 80�� �̻��� B����, 70�� �̻��� C����,
70�� �̸��� F�����̶�� ����ϴ� ���α׷��� ���弼��.

��� ����:
����� ���������� �� ���ΰ���?
89
����� B�����Դϴ�!
*/

#include <stdio.h>
int main()
{
    int score;
    char grade;

    printf("����� ���������� �� ���ΰ���? \n");
    scanf("%d", &score);

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else
        grade = 'F';

    printf("����� %c�����Դϴ�!\n", grade);

    return 0;
}