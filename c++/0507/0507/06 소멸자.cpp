//06 소멸자
/*
객체가 소멸될때 자동으로 호출
리턴 타입이 없다. 이름은 ~구조체명, 매개변수 없다.
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
	//Data d1;	//main 스택메모리에 생성, main함수가 종료될 때	
	//Data n2[5];		
	//Data n3(3);		
	//Data n5[5] = { Data(10) };	
	//====================================================
	Data* n6;		//Data객체를 힙메모리에 생성
	//delete n6;		//n6주소를 갖고 있으며, 해당 주소에 생성된 객체 소멸
	
	//n6 = new Data;	
	//delete n6;

	//n6 = new Data(10);	
	//delete n6;

	n6 = new Data[5];	
	delete[] n6;

	return 0;
}