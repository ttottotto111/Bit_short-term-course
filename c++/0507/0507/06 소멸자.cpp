//06 �Ҹ���
/*
��ü�� �Ҹ�ɶ� �ڵ����� ȣ��
���� Ÿ���� ����. �̸��� ~����ü��, �Ű����� ����.
*/
#include <iostream>
using namespace std;

struct Data
{
public:
	Data() { cout << "Data()" << endl; }					
	Data(int n) { cout << "Data(int)" << endl; }	
	~Data() { cout << "~Data" << endl; }
	
};

int main()
{
	//Data d1;	//main ���ø޸𸮿� ����, main�Լ��� ����� ��	
	//Data n2[5];		
	//Data n3(3);		
	//Data n5[5] = { Data(10) };	
	//====================================================
	Data* n6;		//Data��ü�� ���޸𸮿� ����
	//delete n6;		//n6�ּҸ� ���� ������, �ش� �ּҿ� ������ ��ü �Ҹ�
	
	//n6 = new Data;	
	//delete n6;

	//n6 = new Data(10);	
	//delete n6;

	n6 = new Data[5];	
	delete[] n6;

	return 0;
}