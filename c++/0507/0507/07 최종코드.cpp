//07 �����ڵ�

#include <iostream>
using namespace std;

//��ü���� ���α׷������� ��ü�� ���� : class Ű���带 ������ ����.
//struct --> class
//public	private
//------------------------------

class Student
{
	//1. ��� ������ �����Ѵ�.
private:
	char name[20];
	int number;
	char subject[20];
	char gender;

	//�����ڸ� �����Ѵ�.
public:
	Student(const char* _name, int _number,const char* _subj, char _gender)
	{
		strcpy_s(name, sizeof(name), _name);
		number = _number;
		strcpy_s(subject, sizeof(subject), _subj);
		gender = _gender;
	}
	~Student()
	{
	}

	//��� �Լ�
	void Print()
	{
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << number << endl;
		cout << "�а� : " << subject << endl;
		cout << "���� : " << gender << endl;
	}
};

int main()
{
	//���ÿ� ��ü�� ����
	Student stu("ȫ�浿", 1111, "��ǻ��", 'm');
	stu.Print();

	//���� ��ü�� ����
	Student* pstu = new Student("ȫ���", 2222, "IT", 'f');
	pstu->Print();
	delete pstu;

	return 0;
}