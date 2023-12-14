/*
문제:
double형 변수 1.34927302748318을 소수점 이하 8자리까지 출력하세요.
*/

#include <stdio.h>
int main()
{
    double d;

    d = 1.34927302748318;
    printf("d = %.8lf\n", d);

    return 0;
}