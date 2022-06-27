/************************************************************
CAŬ������  main�Լ��� �°� �ϼ��Ͻÿ�.
*************************************************************/
#include <iostream>
using namespace std;

class CA
{
	char name[20];
	int   age;

public:
	void SetName(const char* _name)
	{
		strcpy_s(name, sizeof(name), _name);
	}
	void SetAge(int _age)
	{
		if (_age < 0)
			return;
		age = _age;
	}
	void SetData(const char* _name, int _age)
	{
		strcpy_s(name, sizeof(name), _name);
		if (_age < 0)
		{
			return;
		}
		age = _age;
	}

	const char* GetName() { return name; }
	int GetAge() { return age; }
};

void main()
{
	CA a;
	a.SetName("ȫ�浿");
	a.SetAge(10);
	a.SetData("�̱浿", 20);

	cout << a.GetName() << endl;
	cout << a.GetAge() << endl;
}
