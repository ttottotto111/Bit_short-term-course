//01 ������ ����
/*
���� : 
��� ������ �ܺο��� ������ ����Ű�� ��� ������ �Ҿ���������.
�� ������ �ذ��ϱ� ���ؼ� �ݵ�� ��� ������ ���н�Ų��.
*/
#include <iostream>
using namespace std;

//ĸ��ȭ
struct bycle
{
	int gear;	//��� ���� : 1 ~ 20

	void changeGear(int g)	//��� �Լ�
	{
		if(g>=1 && g<= 20)
		gear = g;
	}

	void printGear()
	{
		cout << "���� ��� ���� : " << gear << "��" << endl;
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