/*
����:
�Է¹޴� ���� 2���Ͽ� ����ϴ� ���α׷��� �Լ��� �̿��Ͽ� �ۼ��ϼ���.

��� ����:
���� �Է��ϼ��� 2
�Է��� ���� 2��� 4�Դϴ�.
*/

#include <stdio.h>
void multiple(int *n);

int main()
{
    int n;
    printf("���� �Է��ϼ��� ");
    scanf("%d", &n);

    multiple(&n);
    printf("�Է��� ���� 2��� %d�Դϴ�.\n", n);

    return 0;
}

void multiple(int *n)
{
    *n = (*n) * 2;
}