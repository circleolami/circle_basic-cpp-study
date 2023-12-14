/*
문제:
포인터 배열을 출력하는 함수를 이중 포인터를 사용하여 만드세요.
*/

#include <stdio.h>

void print_str(char **pps, int cnt);

int main()
{
    char *ptr_ary[] = {"apple", "banana", "orange", "melon"};
    int count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);

    print_str(ptr_ary, count);
    return 0;
}

void print_str(char **pps, int cnt)
{
    for (int i = 0; i < cnt; i++)
        printf("%s\n", pps[i]);
}