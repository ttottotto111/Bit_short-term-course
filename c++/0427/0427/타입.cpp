//Ÿ��
/*
���������� Ÿ�� >> 1or 0

bool : true / false
���� : iint
���� : char
�Ǽ� : float
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
	//bool ���� Ÿ���̱� ������ ���������� ����Ÿ���� �����ϸ� ��� �ɱ�?
	//��� ; Warning (������ ����)
	//		bool���� true, false Ű���常 ��������
	//istest = 1;
	//istest = -1;

	cout << istest << endl;		

	return 0;
}