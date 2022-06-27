//02_��������ڸ� �������ϴ� ���.cpp
#include <iostream>
using namespace std;

class Sample
{
	char* name;
	int age;
public:
	Sample(const char* _name, int _age)
	{
		name = new char[strlen(_name) + 1];
		strcpy_s(name, strlen(_name) + 1, _name);
		age = _age;
		cout << "Sample" << endl;
	}

	~Sample()
	{
		delete[] name;
		cout << "~Sample" << endl;
	}

	//���� ��������ڸ� ������� �ִ�.
	//Sample(const Sample& sam)
	//{
	//	cout << "���������" << endl;
	//	//strcpy_s(name, sizeof(name), sam.name);
	//	//age = sam.age;
	//	*this = sam;	//����ü�������� ���Կ��� �����ϴ�.	
	//					//this �� �ڱ��ڽ��� �ּҰ��� ���� �ִ� ������ 
	//}

public:
	void SetName(const char* value)
	{
		strcpy_s(name, strlen(value) + 1, value);
	}
	void Print() const  //����ɹ��Լ�(���ο��� �ɹ������� �����ʰڴ�)
	{
		cout << name << ", " << age << endl;
	}
};

int main()
{
	Sample sam1("ȫ�浿", 10);
	Sample sam2(sam1);	//sam2�� ������ �� ���� � �����ڸ� ȣ���������?[���������]

	sam1.Print();		//ȫ�浿, 10
	sam2.Print();		//ȫ�浿, 10 

	sam1.SetName("�̱浿");

	sam1.Print();		//�̱浿, 10
	sam2.Print();		//ȫ�浿, 10 

	return 0;
}