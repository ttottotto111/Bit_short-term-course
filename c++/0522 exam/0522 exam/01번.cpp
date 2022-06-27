//01번
/************************************************************
  01. 아래 코드가 실행될 수 있는 클래스 구현 
      Human 클래스 : 이름을 가지고 있다.
      Student클래스 : Human을 상속받는다. 
                            학번을 가지고 있다.
*************************************************************/
#include <iostream>
using namespace std;

class Human
{
private:
    char name[20];

public:
    Human(const char* _name)
    {
        strcpy_s(name, sizeof(name), _name);
    }

public:
    virtual void Intro()
    {
        cout << "이름 : " << name << endl;
    }

public:
    const char* getName() const {return name;}
};

class Student : public Human
{
private:
    int number;

public:
    Student(const char* _name, int _number) : Human(_name)
    {
        number = _number;
    }

public:
    void Intro()
    {
        cout << "이름 : " << getName()<<"\t";
        cout << "학번 : " << number << endl;
    }
};

void main()
{
    Human H("김사람");
    Student S("이학생", 1234567);

    Human* pH;
    Student* pS;

    pH = &H;
    pS = &S;

    pH->Intro();		// 개인 정보 출력
    pS->Intro();		// 개인 정보 출력
}
