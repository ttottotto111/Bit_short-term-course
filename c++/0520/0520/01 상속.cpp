//01 ���

/*
-���� ������� �ϴ� ��ü�� �м��� ���Ҵ��� ���� �κ��� �ִ�.-
������ : �Ҹ��� ����()
����� : �Ҹ��� ����()
*/

#include <iostream>
using namespace std;


//step 1 : ĸ��ȭ �������� Ŭ���� ����
/*

class Dog
{
public:
	void Sound() { cout << "�۸�~~~" << endl; }
};

class Cat
{
public:
	void Sound() { cout << "�߿�~~~" << endl; }
};

int main()
{
	return 0;
}
*/

//step 2 ��� ������ ����
//�ڽĵ��� ����κ��� �θ𿡰�

class Animal
{
public:
	void Sound() { cout << "??????????????????" << endl; }
};

class Dog : public Animal
{
public:
	//�������̵�
	void Sound() { cout << "�۸�~~~" << endl; }
};

class Cat : public Animal
{
public:
	//�������̵�
	void Sound() { cout << "�߿˾߿�~~~" << endl; }
};

int main()
{
	Dog dog;		dog.Sound();
	Cat cat;		cat.Sound();
	return 0;
}