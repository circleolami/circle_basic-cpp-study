/*
����:
�� ���� �Է¹޾� ������ ū ���� ����ϴ� ���α׷��� ���弼��.
��, ������ ���ϴ� �Լ��� ����ϼ���.
*/

#include <stdio.h>
int abs(int n);
int main()
{
    int a, b;
    printf("�� ���� �Է��ϼ���\n");
    scanf("%d %d", &a, &b);
    if (abs(a) > abs(b))
        printf("������ ū ���� %d�Դϴ�.\n", a);
    else
        printf("������ ū ���� %d�Դϴ�.\n", b);

    return 0;
}

int abs(int n)
{
    if (n < 0)
        return -n;
    return n;
}