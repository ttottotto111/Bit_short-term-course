//06��Ӱ��迡���� ��ü ����
#include <iostream>
using namespace std;

class Parent
{
public:
	Parent() { cout << "Parent" << endl; }
	~Parent() { cout << "~Parent" << endl; }
};

class Child : public Parent
{
public:
	Child() { cout << "Child" << endl; }
	~Child() { cout << "~Child" << endl; }
};

int main()
{
	Child ch;

	return 0;
}