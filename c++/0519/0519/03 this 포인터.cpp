//03 this 포인터

#include <iostream>
using namespace std;

class Sample
{
public:
	void Test()
	{
		cout << this << endl;	//this출력
	}
};

int main()
{
	Sample sam;
	cout << &sam << endl;
	sam.Test();
	return 0;
}