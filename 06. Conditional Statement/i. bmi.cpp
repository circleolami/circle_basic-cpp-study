/*
����:
Ű�� �����Ը� �Է¹޾� BMI������ ����ϰ� ����� ����ϴ� ���α׷��� ���弼��.

��� ����:
Ű�� �Է��ϼ���(cm)
170
�����Ը� �Է��ϼ���(kg)
80
����� BMI������ 27.7�Դϴ�.
�浵���Դϴ�.
*/

#include <stdio.h>
int main()
{
    float height, weight, bmi;

    printf("Ű�� �Է��ϼ���(cm)\n");
    scanf("%f", &height);
    printf("�����Ը� �Է��ϼ���(kg)\n");
    scanf("%f", &weight);

    bmi = weight / (height * height * 0.0001);
    printf("����� BMI������ %.1f�Դϴ�.\n", bmi);

    if (bmi >= 35)
        printf("�����Դϴ�.\n");
    else if (bmi >= 30)
        printf("�ߵ����Դϴ�.\n");
    else if (bmi >= 25)
        printf("�浵���Դϴ�.\n");
    else if (bmi >= 23)
        printf("��ü���Դϴ�.\n");
    else if (bmi >= 18.5)
        printf("�����Դϴ�.\n");
    else
        printf("��ü���Դϴ�.\n");

    return 0;
}