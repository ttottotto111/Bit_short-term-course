//05 ��ӿ����� ��� ����
/*
			�ڽ�����	�ڽ�����	�������
---------------------------------------------
private	:      o    
prtected:	   o            o
public	:      o            o          o
*/
#include <iostream>
using namespace std;

class Parent		//�θ�, ��� �۷���
{
private:
	int num1;

protected:
	int num11;

public:
	void fun1() { cout << "fun1" << endl; }
};

class Child :public Parent		//�ڽ�, �Ļ� Ŭ����
{
	int num2;

public:
	void fun2() 
	{
		//num1;		//error �θ�κ��� �������� private��� ����
		num11;		//ok �θ�κ��� �������� protected��� ����
		fun1();		//ok �θ�κ��� �������� public ��� �Լ�
		cout << "fun2" << endl; 
	}
};

int main()
{

	return 0;
}