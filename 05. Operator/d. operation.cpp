/*
문제:
4.0과 1.2의 덧셈, 뺄셈, 곱셈, 나눗셈을 한 값을 소수점 이하 첫째 자리까지 출력하세요.

출력 예제:
4.0 + 1.2 = 5.2
4.0 - 1.2 = 2.8
4.0 * 1.2 - 4.8
4.0 / 1.2 = 3.3
*/

#include <stdio.h>
int main()
{
    float a, b;

    a = 4.0;
    b = 1.2;

    printf("%.1f + %.1f = %.1f\n", a, b, a + b);
    printf("%.1f - %.1f = %.1f\n", a, b, a - b);
    printf("%.1f * %.1f = %.1f\n", a, b, a * b);
    printf("%.1f / %.1f = %.1f\n", a, b, a / b);

    return 0;
}