//void������ : c���� ������ ����
#include <iostream>
using namespace std;

/*
1. ��� Ÿ���� �ּҸ� ������ �� �ִ�.
2.void* ���ÿ��� �ݵ�� ������ Ÿ���� ������ 
*/

int main()
{
	int num1 = 10;
	char ch = 'a';

	int* p1 = &num1; //int* p2 = &ch; error

	//1..
	void* vf;
	vf = &num1;
	vf = &ch;

	//2...
	cout << *(char*)vf << endl;	//'a'

	vf = &num1;
	*(int*)vf = 20;

	return 0;
}