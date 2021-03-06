//02_복사생성자를 만들어야하는 경우.cpp
#include <iostream>
using namespace std;

class Sample
{
	char* name;
	int age;
public:
	Sample(const char* _name, int _age)
	{
		name = new char[strlen(_name) + 1];
		strcpy_s(name, strlen(_name) + 1, _name);
		age = _age;
		cout << "Sample" << endl;
	}

	~Sample()
	{
		delete[] name;
		cout << "~Sample" << endl;
	}

	//내가 복사생성자를 만들수도 있다.
	//Sample(const Sample& sam)
	//{
	//	cout << "복사생성자" << endl;
	//	//strcpy_s(name, sizeof(name), sam.name);
	//	//age = sam.age;
	//	*this = sam;	//구조체변수끼리 대입연산 가능하다.	
	//					//this 는 자기자신의 주소값을 갖고 있는 포인터 
	//}

public:
	void SetName(const char* value)
	{
		strcpy_s(name, strlen(value) + 1, value);
	}
	void Print() const  //상수맴버함수(내부에서 맴버변수를 수정않겠다)
	{
		cout << name << ", " << age << endl;
	}
};

int main()
{
	Sample sam1("홍길동", 10);
	Sample sam2(sam1);	//sam2가 생성될 때 과연 어떤 생성자를 호출시켰을까?[복사생성자]

	sam1.Print();		//홍길동, 10
	sam2.Print();		//홍길동, 10 

	sam1.SetName("이길동");

	sam1.Print();		//이길동, 10
	sam2.Print();		//홍길동, 10 

	return 0;
}