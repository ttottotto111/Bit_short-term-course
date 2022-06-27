//02 멤버접근지정자
/*
필요에 의해서 멤버를 외부로 노출 및 은닉 시킬 수 있다.
public : 외부에서의 접근을 허용
protected : 
private : 외부에서의 접근을 금지
*/

#include <iostream>
using namespace std;


//구조체는 기본접근 지정자가 public이다.
//struct Sample
//{
//	int num;
//	
//	void foo() {}
//	void woo() {}
//};
//
//struct Sample1
//{
//private:
//	int num;
//
//public:
//	void foo() {}
//	void woo() {}
//
//private:
//	void hoo() {}
//	void zoo() {}
//};
//
//int main()
//{
//	Sample sam1;
//	//외부에서 접근을 허용하는 구조
//	sam1.num;
//	sam1.foo();
//	sam1.woo();
//
//	Sample1 sam2;
//	sam2.foo();
//	sam2.woo();
//
//	return 0;
//}


//Sample이라는 구조체 정의
struct Sample
{
	//2. int num1멤버변수 추가하고 은닉할것
private:
	int num1;

	//3. void test1()멤버함수 추가하고, 외부접근 허용불가 설정
private:
	void test1()
	{

	}
	//4. void test2()함수 추가하고 외부접근 허용
public:
	void test2()
	{

	}
};

int main()
{
	Sample sam1;
	sam1.test2();
}