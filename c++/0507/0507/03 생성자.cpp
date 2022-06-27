//03 생성자
//객체 생성시 멤버 변수를 초기화 하기 위한 목적을 갖는 특별한 함수이다.

#include <iostream>
using namespace std;

/*
struct Sample
{
private:
	int num1;
	int num2;
	int result;

public:
	void Add() { result = num1 + num2; }
	void Sub() { result = num1 - num2; }

	void Print() { cout << num1 << "+" << num2 << "=" << result; }
};

int main()
{
	//전통적인 구조체에서 생성과 동시에 초기화 문법은 더이상 불가능
	//데이터가 외부에서 접근할 수 없도록 은닉되었기 때문.
	//대안 = 생성자
	Sample sam = { 10, 20 };

	sam.Add();
	sam.Print();
	return 0;
}
*/

//생성자는 객체 생성시 자동으로 호출된다.
//목적은 객체 초기화다.
//생성자는 리턴타입이 없다. 이름은 구조체명과 동일해야 한다. 매개변수는 존재
// 오버로딩, 기본값이 가능
struct Sample
{
	int num1;
	int num2;

public:
	Sample() { num1 = 0; num2 = 0; cout << "생성자()" << endl; }
	Sample(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
		cout << "생성자(int,int)" << endl;

	}

public:
	void Print()
	{
		cout << num1 << ", " << num2 << endl;
	}
};

int main()
{
	Sample sam1;
	cout << sizeof(sam1) << endl;	//8

	Sample sam2(10, 20);

	sam1.Print();
	sam2.Print();

	cout << sizeof(sam1) << endl;

	return 0;
}