//02 상수 멤버
/*
상수맴버변수 : 반드시 콜론초기화에서 초기화
상수맴버함수 : 해당 함수내에서는 절대로 맴벼변수의 값을 수정할 수 없다.
*/
#include <iostream>
using namespace std;

class Member
{
	const int id;

	int testnumber;

public:
	Member(int _id) : id(_id)
	{
		testnumber = _id;
	}

public:
	void fun1()
	{
		testnumber = 10;
	}

	void fun2() {}
	void fun3() const { }

	void constfun1(int temp) const
	{
		temp++;			//지역변수 수정 ok
		//testnumber++;	//error(멤버 변수 수정 불가)
		//fun2();		//일반 멤버 함수 -> 에러
		fun3();		//상수 멤버 함수 ok
	}

};

int main()
{
	Member member(10);
	member.constfun1(1);
	return 0;
}
