//06상속관계에서의 객체 생성
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