//03번
/************************************************************
03. 아래 코드가 실행될 수 있는 클래스 구현
Date 클래스 : 년, 월, 일을 맴버 변수로 가지고 있다.
Product 클래스 : 회사, 제품, Date클래스 맴버, 가격을 가지고 있다.
즉 Date와 Product는 has_a관계이다.(포함관계)
힌트)
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
        cout << "날  짜 : ";
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
        cout << "제품명 : " << product << endl;
        cout << "회  사 : " << company << endl;
        d->Print();
        cout << "가  격 : " << price << endl;
    }
};

void main()
{
     Product S("새우깡","농심",2009,8,15,900);
     S.OutProduct();                   //제품의 모든 정보 출력
}
