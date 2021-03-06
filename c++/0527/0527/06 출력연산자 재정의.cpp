//06 출력연산자 재정의#include <iostream>using namespace std;class Stu{    const int num;    char name[20];public:    Stu(int _num, const char* _name) : num(_num)    {        strcpy_s(name, sizeof(name), _name);    }    void Print() const    {        cout << num << ", " << name << endl;    }    //외부와 친구를 맺을 수 있다. (별로 좋은 문법은 아니다.)    //친구를 맺으면 자신의 (Stu) private맴버도 접근을 허락한다.    friend ostream& operator<<(ostream& os, const Stu& stu);};

ostream& operator<<(ostream& os, const Stu& stu)
{
    os << stu.num << "," << stu.name;
}

int main()
{
    Stu stu(10, "홍길동");    stu.Print();    //연산자 재정의를 cout객체를 만든 클래스 내부에 해야한다.    cout << stu;        //맴버함수형태 : cout.operator<<(stu); <= 권장                        //전역함수형태 : operator<<(cout, stu);    return 0;
}