/*
����:
switch���� �̿��Ͽ� �Էµ� ���� ������ ���� ����ϴ� ���α׷��� ���弼��.

��� ����:
���� �Է��ϼ���
3
3���� 31�ϱ��� �ֽ��ϴ�
*/

#include <stdio.h>
int main()
{
    int n;

    printf("���� �Է��ϼ���\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d���� 31�ϱ��� �ֽ��ϴ�\n", n);
        break;
    case 2:
        printf("%d���� 28�ϱ��� �ֽ��ϴ�\n", n);
        break;
    default:
        printf("%d���� 30�ϱ��� �ֽ��ϴ�\n", n);
    }
    return 0;
}