//09 HAS_A
/*
[Ŭ������ Ŭ������ ����]
1)has a == ����
2)is a == ���
-----------------------------------------------
����� ���� �����Ѵ�.	[��ü : ���, ��]
�л��� ���� ������ �ִ�. [��ü : �л�, ��]

*/

#include <iostream>
using namespace std;

//1. �Ͻ����� ���� ����
//�л��� ���� �����ϰ� �ִ�. [��ü : �л�, ��]

//�� Ŭ���� ���� ==> �߻�ȭ VS ����ȭ(���� ���̴� ���� �Ȱ��� �׸��°�)
class pen
{
	//1. ��� ����
private:
	char color[20];
	int width;

	//2. ������ & �Ҹ���
public:
	pen(const char* _color, int _width)
	{
		strcpy_s(color, sizeof(color), _color);
		width = _width;
	}
	~pen()
	{

	}

	//3. �޼���(��� �Լ�)
public:
	void Write(const char* msg)
	{
		cout << "[" << color << ":";
		cout << width << "]";
		cout << msg << endl;
	}
};

//�̸�, �й�
//������ �۾��� �� �� �ִ� ���
class student
{
private:
	char name[20];
	int number;
	pen* mypen;

public:
	student(const char* _name, int _number)
	{
		strcpy_s(name, sizeof(name), _name);
		number = _number;
		mypen = NULL;	//�����ϰ� ���� ���� ����
	}
	~student()
	{

	}

public:
	void �������(pen *p)
	{
		mypen = p;	//���� ������ �Ͻ��� �߻�
	}
	void �۾�������(const char *msg)	
	{
		if (mypen == NULL)		//���� �����ϰ� ���� �ʴٸ�
			return;
		mypen->Write(msg);		//���� ������ ����...���� ����� ����Ϸ���
	}

	void �������´�()
	{
		mypen = NULL;			//���� ������ �����.
	}
};

int main()
{
	//��ü�� ����
	student stu("ȫ�浿", 111);
	pen redpen("����", 2);
	pen bluepen("�Ķ�", 1);
	pen greenpen("���", 5);

	//�л��� �۾��� ���� �ʹ�.
	stu.�������(&redpen);
	stu.�۾�������("�۾��� ���� �ֽ��ϴ�.");
	stu.�������´�();

	stu.�۾�������("�ٽ� �۾��� ���� �ֽ��ϴ�.");

	return 0;
}