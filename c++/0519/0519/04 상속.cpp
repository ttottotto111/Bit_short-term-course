//04 ���
/*
1. �θ��� ��������� ��� �Լ��� �ڽĿ��� ��ӵȴ�.
*/
#include <iostream>
using namespace std;

class Parent		//�θ�, ��� �۷���
{
	int num1;
public:
	void fun1() { cout << "fun1" << endl; }
};

class Child	:public Parent		//�ڽ�, �Ļ� Ŭ����
{
	int num2;
public:
	void fun2() { cout << "fun2" << endl; }
};

int main()
{
	cout << sizeof(Parent) << endl;
	cout << sizeof(Child) << endl;
	Parent p1;
	p1.fun1();

	Child c1;
	c1.fun1();
	c1.fun2();

	return 0;
}