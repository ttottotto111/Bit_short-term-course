//04 생성자 호출
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
	Data d1;		//1개 , 1번
	Data n2[5];		//5개, 1번
	Data n3(3);		//1개, 2번
	Data n4('a', 10);//1개, 3번
	Data n5[5] = { Data(10), Data('a',10) };	//5개, (2,3,1,1,1)
	//====================================================
	Data* n6;		//객체 0개
	n6 = new Data;	//Data객체를 생성하겠다. 객체 1개, 생성자 1번
	n6 = new Data(10);	//1개, 2번
	n6 = new Data[5];	//5개, 1번
}