//03��
/************************************************************
03. �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
Date Ŭ���� : ��, ��, ���� �ɹ� ������ ������ �ִ�.
Product Ŭ���� : ȸ��, ��ǰ, DateŬ���� �ɹ�, ������ ������ �ִ�.
�� Date�� Product�� has_a�����̴�.(���԰���)
��Ʈ)
class A {
public:
    A(int n1, int n2) {}
};
class B {
    A* pa;
public:
    B(int n1, int n2) {
        pa = new A(n1, n2);
    }
    ~B() {
        delete pa;
    }
};
*************************************************************/
#include <iostream>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int date;

public:
    Date(int _year, int _month, int _date)
    {
        year = _year;
        month = _month;
        date = _date;
    }
public:
    void Print()
    {
        cout << "��  ¥ : ";
        cout << year << "-";
        cout << month << "-";
        cout << date << endl;
    }
};

class Product
{
private:
    char company[20];
    char product[20];
    Date* d;
    int price;

public:
    Product(const char* _product, const char* _company,  int _year, int _month, int _date, int _price)
    {
        strcpy_s(product, sizeof(product), _product);
        strcpy_s(company, sizeof(company), _company);
        d = new Date(_year, _month, _date);
        price = _price;
        
    }

public:
    void OutProduct() const
    {
        cout << "��ǰ�� : " << product << endl;
        cout << "ȸ  �� : " << company << endl;
        d->Print();
        cout << "��  �� : " << price << endl;
    }
};

void main()
{
     Product S("�����","���",2009,8,15,900);
     S.OutProduct();                   //��ǰ�� ��� ���� ���
}
