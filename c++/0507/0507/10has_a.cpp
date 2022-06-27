//10 HAS_A 2번
/*
강력한 has a관계 (라이프 사이클이 동일 - 생성과 종료 시점 동일)
예) 태어날때부터 총을 가지고 태어난다는 가정
*/

#include <iostream>
using namespace std;

class gun
{
private:
	int count;		//총알의 갯수

public:
	gun(int _count = 10)	//기본값
	{
		count = _count;
	}

public:
	void 총을쏜다()
	{
		if (count > 0)
		{
			cout << "빵~~~" << endl;
			count--;
		}
		else
		{
			cout << "딸깍딸깍" << endl;
		}
	}
};

class man
{
private:
	gun* g1;
public:
	man()	//man이 만들어질 때 gun도 같이 만들어짐
	{
		g1 = new gun(2);
	}
	~man()	//man이 소멸될때 gun도 같이 소멸됨
	{
		delete g1;
	}

public:
	void 총을쏜다()
	{
		g1->총을쏜다();
	}
};
int main()
{
	man man1;	//사람을 만들때 총도 내부적으로 같이 만들어진다.
	man1.총을쏜다();
	man1.총을쏜다();
	man1.총을쏜다();
	man1.총을쏜다();

	return 0;
}