//01 데이터 은닉
/*
이유 : 
멤버 변수를 외부에서 접근을 허용시키면 멤버 변수가 불안정해진다.
이 문제를 해결하기 위해서 반드시 멤버 변수는 은닉시킨다.
*/
#include <iostream>
using namespace std;

//캡슐화
struct bycle
{
	int gear;	//멤버 변수 : 1 ~ 20

	void changeGear(int g)	//멤버 함수
	{
		if(g>=1 && g<= 20)
		gear = g;
	}

	void printGear()
	{
		cout << "현재 기어 상태 : " << gear << "단" << endl;
	}
};

int main()
{
	bycle by1 = { 5 };
	bycle by2 = { 3 };

	by1.printGear();
	by2.printGear();

	by1.changeGear(8);
	by2.changeGear(10);

	by1.printGear();
	by2.printGear();

	return 0;
}