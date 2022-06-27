//01 정적멤버변수
/*
멤버 변수 앞에 static 키워ㅕ드를 추가
클래스 멤버라 부름(인스턴스 멤버가 아님)
*/

#include <iostream>
using namespace std;

class Card
{
	//인스턴스멤버(모든 인스턴스 객체마다 다른 값을 가져야 한다.)
	int number;		//1~10, J(11), Q(12), K(13)
	string shape;	//다, 크, 스, 하
	static int width;		//크기
	static int height;		//크기

	//클래스멤버(모든 인스턴스 객체마다 동일한 값을 갖는다.)
public:
	Card(int _number, string _shape)
	{
		number = _number;
		shape = _shape;
	}

public:
	void Print()
	{
		cout << number << ", " << shape << ", " << width << ", " << height << endl;
	}
};

int Card::height = 600;
int Card::width = 200;

int main()
{
	Card c1(1, "클로버");
	Card c2(2, "다이아몬드");

	c1.Print();
	c2.Print();
	return 0;
}