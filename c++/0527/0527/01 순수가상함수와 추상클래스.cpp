#include <iostream>
using namespace std;

//(�߻� Ŭ����)
class Animal
{
public:
	virtual void Sound() const = 0;		//���������Լ� (�߻�޼���)
};

//�θ��� �߻�޼��带 ���������� ������ �ڽĵ� �߻�Ŭ������ �ȴ�.
class Dog : public Animal
{
public:
	void Sound() const { cout << "�۸�!!!!" << endl; }
};

int main()
{
	Animal* p = new Dog;
	p->Sound();
	delete p;

	return 0;
}