/*
����:
�� ���� ������ �Է¹޾� ū ���� ����ϴ� ���α׷��� ���弼��.
�� ��, ū ���� �����ϴ� �Ϳ� �Լ��� ����ϼ���.

��� ����:
ù ��° ���� �Է��ϼ���
4
�� ��° ���� �Է��ϼ���
10
ū ���� 10�Դϴ�
*/

#include <stdio.h>
void bigger_number(int n, int m);

int main()
{
    int n, m;
    printf("ù ��° ���� �Է��ϼ���\n");
    scanf("%d", &n);
    printf("�� ��° ���� �Է��ϼ���\n");
    scanf("%d", &m);
    bigger_number(n, m);
    return 0;
}

void bigger_number(int n, int m)
{
    int ans;

    if (n > m)
        ans = n;
    else
        ans = m;

    printf("ū ���� %d�Դϴ�\n", ans);
}
