/************************************************************
 ������ 2���� ��ȯ�ϴ� swap �Լ��� ���۷����� ����ؼ� �����Ͻÿ�.
*************************************************************/

#include <iostream>
using namespace std;

void swap(int num,int num1);

int main()
{
	int num = 10, num1 = 20;

	swap(num, num1);
	return 0;
}


void swap(int num, int num1)
{
	int temp = num;
	num = num1;
	num1 = temp;
	cout << "num : " <<num<< "\n" << "num1 : " << num1 << endl;
}
