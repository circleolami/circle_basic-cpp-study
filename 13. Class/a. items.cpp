/*
문제:
상품 클래스를 만드세요
변수: 상품명, 가격
함수: 상품명과 가격을 출력한다
상품명과 가격을 설정한다

호출이 많이 될 함수는 인라인함수로 만드세요
*/

#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
    string name;
    int price;

public:
    void show();
    void setName(string n);
    void setPrice(int p);
};

void Item::show()
{
    cout << "상품명 : " << name << endl;
    cout << "가격 : " << price << endl;
}

void Item::setName(string n)
{
    name = n;
}

void Item::setPrice(int p)
{
    if (p > 0)
        price = p;
    else
        cout << "가격을 업데이트 할 수 없습니다" << endl;
}

int main()
{
    Item item1;
    item1.setName("초콜릿");
    item1.setPrice(2000);

    item1.show();
    return 0;
}