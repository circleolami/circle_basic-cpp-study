/*
문제:
키와 몸무게를 입력받아 BMI지수를 계산하고 결과를 출력하는 프로그램을 만드세요.

출력 예제:
키를 입력하세요(cm)
170
몸무게를 입력하세요(kg)
80
당신의 BMI지수는 27.7입니다.
경도비만입니다.
*/

#include <stdio.h>
int main()
{
    float height, weight, bmi;

    printf("키를 입력하세요(cm)\n");
    scanf("%f", &height);
    printf("몸무게를 입력하세요(kg)\n");
    scanf("%f", &weight);

    bmi = weight / (height * height * 0.0001);
    printf("당신의 BMI지수는 %.1f입니다.\n", bmi);

    if (bmi >= 35)
        printf("고도비만입니다.\n");
    else if (bmi >= 30)
        printf("중도비만입니다.\n");
    else if (bmi >= 25)
        printf("경도비만입니다.\n");
    else if (bmi >= 23)
        printf("과체중입니다.\n");
    else if (bmi >= 18.5)
        printf("정상입니다.\n");
    else
        printf("저체중입니다.\n");

    return 0;
}