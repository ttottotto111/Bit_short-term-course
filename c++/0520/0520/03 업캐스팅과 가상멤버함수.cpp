//03 ��ĳ���ð� ����ɹ��Լ�
/*
���� �ټ��� ������, ����� ��ü�� �����ؼ� �����ϰ��� �Ѵٸ�?
Dog dog[5], Cat cat[5];
�߰��� �������� ������ �þ�ٸ�?
������ �迭�� ������ ������ ���̴�.

������ upcasting�� ����Ѵٸ� �ϳ��� �迭�� �ذ��� �����ϴ�.
Animal ani[100]
*/

#include <iostream>
using namespace std;

class Animal
{
public:
	//����ɹ��Լ�
	//�ڽĿ� ���� �����ǰ� �ɸ��� �Լ��� ����ɹ� �Լ��� �����.
	//�θ��� �����ͷ� �ش� �޼��带 ȣ���ϸ� �ڽ��� �����ǵ� �޼��尡 ȣ��ȴ�.
	virtual void Sound() { cout << "????????????????" << endl; }
};

class Dog : public Animal
{
public:
	void Sound() { cout << "�۸�~~~" << endl; }
};

class Cat : public Animal
{
public:
	//�������̵�(�ɹ��Լ��� ������)
	void Sound() { cout << "�߿˾߿�~~~" << endl; }
};

int main()
{
	//��ĳ������ �̿��� ���� ����
	Animal* woori[4];		//10���� ��ü�� �ּҸ� ������ �� �ִ� �迭 ����
	woori[0] = new Dog;
	woori[1] = new Cat;
	woori[2] = new Cat;
	woori[3] = new Dog;

	//��� �����Ҹ����� �Ҹ��� ������ ��ü�� �̿��� ȣ��
	for (int i = 0; i < 4; i++)
	{
		woori[i]->Sound();		//????
	}

	return 0;
}
