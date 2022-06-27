//05 생성자 콜론 초기화
//멤버 변수를 초기화 할때
//1방식 : { }안에서 대입 연산을 이용하여 초기화
//2방식 : 콜론 초기화
//2방식의 결과는 동일하다. 하지만 과정은 다름
//1방식 : 선언후 대입 연산방식			int n1;  n1 = 0;
//2방식 : 선언과 동시에 초기화 방식		int n1 = 0; =>더 간단

//단 멤버 변수중에 반드시 선언과 동시에 초기화 하는 변수가 필요하다면 반드시 콜론초기화로 초기화
//ex) const변수
#include <iostream>
using namespace std;

struct Data
{
	int num;
	char ch;
	const int NUM;
public:
	Data(): num(0), ch(' '), NUM(0)
	{
		//num = 0;
		//ch = ' ';
	}
	Data(int _num, char _ch) : num(_num), ch(_ch), NUM(_num)
	{
		num = _num + _num;
		//ch = _ch;
	}
};

int main()
{
	//int n;
	//const int n1 = 10;

	return 0;
}