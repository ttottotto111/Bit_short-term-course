//04 ����������ȯ
#include <iostream>
using namespace std;

class Stu
{
	const int num;
	char name[20];
public:
	Stu(int _num, const char* _name) : num(_num)
	{
		strcpy_s(name, sizeof(name), _name);
	}

	int GetNum() const { return num; }

	//��ȯ ������
	operator int()
	{
		return num;
	}
	operator const char* ()
	{
		return name;
	}
};

int main()
{
	Stu stu(10, "ȫ�浿");

	//ȫ�浿�� �й��� ���ʹ�.
	int number = stu.GetNum();
	cout << "�й� : " << number << endl;

	int number1 = stu;	//int = Stu : Stu�� intŸ������
	cout << "�й� : " << number1 << endl;

	char name[20];
	strcpy_s(name, sizeof(name), stu);
	cout << "�̸� : " << name << endl;

	return 0;
}