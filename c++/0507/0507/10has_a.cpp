//10 HAS_A 2��
/*
������ has a���� (������ ����Ŭ�� ���� - ������ ���� ���� ����)
��) �¾������ ���� ������ �¾�ٴ� ����
*/

#include <iostream>
using namespace std;

class gun
{
private:
	int count;		//�Ѿ��� ����

public:
	gun(int _count = 10)	//�⺻��
	{
		count = _count;
	}

public:
	void �������()
	{
		if (count > 0)
		{
			cout << "��~~~" << endl;
			count--;
		}
		else
		{
			cout << "�������" << endl;
		}
	}
};

class man
{
private:
	gun* g1;
public:
	man()	//man�� ������� �� gun�� ���� �������
	{
		g1 = new gun(2);
	}
	~man()	//man�� �Ҹ�ɶ� gun�� ���� �Ҹ��
	{
		delete g1;
	}

public:
	void �������()
	{
		g1->�������();
	}
};
int main()
{
	man man1;	//����� ���鶧 �ѵ� ���������� ���� ���������.
	man1.�������();
	man1.�������();
	man1.�������();
	man1.�������();

	return 0;
}