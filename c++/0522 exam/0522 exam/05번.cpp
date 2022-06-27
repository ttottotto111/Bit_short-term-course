//05번
/************************************************************
  05. 아래 코드가 실행될 수 있는 클래스 구현
      단, human(이름을 가지고 있는 클래스)
       Student : human을 상속받은 클래스로 학번을 가지고 있다.
     클래스 다이어그램을 그리고 이미지파일 형태로 제출
*************************************************************/
#include <iostream>
using namespace std;

class human
{
private:
    char name[20];

public:
    human(const char* _name)
    {
        strcpy_s(name, sizeof(name), _name);
    }
    const char* getName() const { return name; }

public:
    virtual void Think() { cout << "부모의 입장에서 생각" << endl; }
};

class Student : public human
{
private:
    int number;

public:
    Student(const char* _name, int _number) : human(_name)
    {
        number = _number;
    }

    void Intro()
    {
        cout << "이름 : " << getName() << "\t";
        cout << "학번 : " << number << endl;
    }
    void Think() { cout << "자식의 입장에서 생각" << endl; }
    void Study() { cout << "공부를 합니다" << endl; }
};

void main()
{
    Student K("홍길동", 9506299);
    K.Intro();		//이름과 학번 출력
    K.Think();		// 부모의 함수를 재정의
           //부모의 Think() : "부모의 입장에서 생각" 문자열 출력
           //자식의 Think() : "자식의 입장에서 생각" 문자열 출력
    K.Study();		// 자식만 가지고 있는 함수
                    // "공부를 합니다" 문자열 출력
}
