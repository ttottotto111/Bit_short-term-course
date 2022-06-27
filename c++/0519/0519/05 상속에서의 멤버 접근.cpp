//05 상속에서의 멤버 접근
/*
			자신접근	자식접근	모두접근
---------------------------------------------
private	:      o    
prtected:	   o            o
public	:      o            o          o
*/
#include <iostream>
using namespace std;

class Parent		//부모, 기반 글래스
{
private:
	int num1;

protected:
	int num11;

public:
	void fun1() { cout << "fun1" << endl; }
};

class Child :public Parent		//자식, 파생 클래스
{
	int num2;

public:
	void fun2() 
	{
		//num1;		//error 부모로부터 물려받은 private멤버 변수
		num11;		//ok 부모로부터 물려받은 protected멤버 변수
		fun1();		//ok 부모로부터 물려받은 public 멤버 함수
		cout << "fun2" << endl; 
	}
};

int main()
{

	return 0;
}