//void포인터 : c언어와 동일한 문법
#include <iostream>
using namespace std;

/*
1. 모든 타입의 주소를 저장할 수 있다.
2.void* 사용시에는 반드시 원래의 타입의 형으로 
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