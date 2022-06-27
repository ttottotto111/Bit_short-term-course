//07 상속에서의 객체 초기화
/*
객체초기화는 자신의 생성자에서
*/

#include <iostream>
using namespace std;

class Person
{
protected:
	char name[20];
	int age;

public:
	Person(const char* _name, int _age)
	{
		strcpy_s(name, sizeof(name), _name);
		age = _age;
	}

public:
	int getAge() const { return age; }
	const char* getName() const { return name; }

public:
	void Print() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

};

class Student : public Person
{
	char subject[20];
	int number;

public:
	//자식의 생성자에서는 부모를 어떤 생성자를 호출해서 생성할지를 결정해줘야함
	//만약, 결정을 안해주면 부모는 인자없는 디폴트 생성자를 호출하면서 생성된다.
	Student(const char* _name, int _age, const char* _subj, int _num)
		:Person(_name, _age)	//<====================================
	{
		strcpy_s(subject, sizeof(subject), _subj);
		number = _num;
	}

public:
	//재정의(오버라이드)
	//부모의 멤버함수의 형태를(리턴타입, 이름, 매개변수 리스트) 동일하게 자식이 만들면.
	void Print() const
	{
		//이름, 나이도 출력
		//2번보다는 1번방식 권장
		//1. 부모의 private멤버 변수를 접근할 수 있는 getMethod 를 제공
		cout << "이름 : " << getName() << endl;
		cout << "나이 : " << getAge() << endl;
		cout << "학과 : " << subject << endl;
		cout << "학번 : " << number << endl;

		//2.부모의 private 멤버변수를 protected로 변경하자
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
		cout << "학과 : " << subject << endl;
		cout << "학번 : " << number << endl;

		//3.부모의 기능함수를 활용하자
		Person::Print();
		cout << "학과 : " << subject << endl;
		cout << "학번 : " << number << endl;
	}
};

int main()
{
	Student stu("홍길동", 20, "컴퓨터", 1111);
	stu.Print();
	return 0;
}