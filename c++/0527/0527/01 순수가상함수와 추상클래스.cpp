#include <iostream>
using namespace std;

//(추상 클래스)
class Animal
{
public:
	virtual void Sound() const = 0;		//순수가상함수 (추상메서드)
};

//부모의 추상메서드를 재정의하지 않으면 자식도 추상클래스가 된다.
class Dog : public Animal
{
public:
	void Sound() const { cout << "멍멍!!!!" << endl; }
};

int main()
{
	Animal* p = new Dog;
	p->Sound();
	delete p;

	return 0;
}