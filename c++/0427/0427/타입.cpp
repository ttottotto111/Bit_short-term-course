//타입
/*
정수형태의 타입 >> 1or 0

bool : true / false
정수 : iint
문자 : char
실수 : float
*/

#include <iostream>
using namespace std;

int main()
{
	bool istest;

	istest = true;
	cout << istest << endl;		//1

	istest = false;
	cout << istest << endl;		//0

	//===================================
	//bool 정수 타입이기 때문에 강제적으로 정수타입을 대입하면 어떻게 될까?
	//결론 ; Warning (잠정적 에러)
	//		bool에는 true, false 키워드만 저장하자
	//istest = 1;
	//istest = -1;

	cout << istest << endl;		

	return 0;
}