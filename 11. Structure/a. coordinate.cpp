/*
문제:
3차원 정수 좌표를 저장하기 위한 구조체 Three_D를 각 멤버 변수는 x, y, z를 사용하여 정의하세요.
구조체 변수 a를 선언하여 x = 100, y = 200, z = 300을 할당하고 출력하세요.
*/

#include <stdio.h>
struct Three_D
{
    int x;
    int y;
    int z;
};
int main()
{

    Three_D a;

    a.x = 100;
    a.y = 200;
    a.z = 300;

    printf("구조체 a의 x좌표: %d, y좌표: %d, z좌표: %d\n", a.x, a.y, a.z);

    return 0;
}