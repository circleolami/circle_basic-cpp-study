/*
����:
��ǰ Ŭ������ ���弼��
����: ��ǰ��, ����
�Լ�: ��ǰ��� ������ ����Ѵ�
��ǰ��� ������ �����Ѵ�

ȣ���� ���� �� �Լ��� �ζ����Լ��� ���弼��
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
    cout << "��ǰ�� : " << name << endl;
    cout << "���� : " << price << endl;
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
        cout << "������ ������Ʈ �� �� �����ϴ�" << endl;
}

int main()
{
    Item item1;
    item1.setName("���ݸ�");
    item1.setPrice(2000);

    item1.show();
    return 0;
}