//04 ������ ȣ��
#include<iostream>
using namespace std;

struct Data
{
public:
	Data() { cout << "Data()" << endl; }						//1
	Data(int n) { cout << "Data(int)" << endl; }				//2
	Data(char ch, int n) { cout << "Data(char, int)" << endl; }	//3
};

int main()
{
	Data d1;		//1�� , 1��
	Data n2[5];		//5��, 1��
	Data n3(3);		//1��, 2��
	Data n4('a', 10);//1��, 3��
	Data n5[5] = { Data(10), Data('a',10) };	//5��, (2,3,1,1,1)
	//====================================================
	Data* n6;		//��ü 0��
	n6 = new Data;	//Data��ü�� �����ϰڴ�. ��ü 1��, ������ 1��
	n6 = new Data(10);	//1��, 2��
	n6 = new Data[5];	//5��, 1��
}