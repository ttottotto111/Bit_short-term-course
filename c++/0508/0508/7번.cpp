
/************************************************************
  09. �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
	  Student Ŭ������ �ɹ� ������ �й�, �̸�, ������ �ִ�.

	  ������ �����ε�		:
	  Set �޼���			:
	  Get �޼���			:
*************************************************************/
#include <iostream>
using namespace std;

class Student
{
private:
	int number;
	char name[20];
	int score;

public:
	Student(int _number)
	{
		number = _number;
	}

	Student(const char* name1, int score1)
	{
		strcpy_s(name, sizeof(name), name1);
		score = score1;
	}

	void SetName(const char* _name)
	{
		strcpy_s(name, sizeof(name), _name);
	}

	void SetScore(int _score)
	{
		if (_score < 0 || _score>100)
			cout << "������ �� �ִ� ������ ������ϴ�." << endl;
		else
		score = _score;
	}

	int SetNumber(int number1)
	{
		number = number1;
		return number;
	}

	int GetStNum() { return number; }
	const char* GetName() { return name; }
	int GetScore() { return score; }
};

void main()
{
	Student Hong(906123);	// �й�
	Hong.SetName("ȫ�浿");

	Hong.SetScore(99);		// �� �ش� Set�޼��忡�� 0~100�� 
						   // ���� ó���� �� �ֵ��� �Ұ� 
	Hong.SetScore(101);		// "������ �� �ִ� ������ ������ϴ�."��� ���ڿ��� ����� ��

	cout << "�й� : " << Hong.GetStNum() << endl;
	cout << "�̸� : " << Hong.GetName() << endl;
	cout << "���� : " << Hong.GetScore() << endl;

	Student Kim("��浿", 80);	// �̸�, ����
	Kim.SetNumber(945126);	// �й�
	cout << "�й� : " << Kim.GetStNum() << endl;
	cout << "�̸� : " << Kim.GetName() << endl;
	cout << "���� : " << Kim.GetScore() << endl;
}