//05��
/************************************************************
  05. �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
      ��, human(�̸��� ������ �ִ� Ŭ����)
       Student : human�� ��ӹ��� Ŭ������ �й��� ������ �ִ�.
     Ŭ���� ���̾�׷��� �׸��� �̹������� ���·� ����
*************************************************************/
#include <iostream>
using namespace std;

class human
{
private:
    char name[20];

public:
    human(const char* _name)
    {
        strcpy_s(name, sizeof(name), _name);
    }
    const char* getName() const { return name; }

public:
    virtual void Think() { cout << "�θ��� ���忡�� ����" << endl; }
};

class Student : public human
{
private:
    int number;

public:
    Student(const char* _name, int _number) : human(_name)
    {
        number = _number;
    }

    void Intro()
    {
        cout << "�̸� : " << getName() << "\t";
        cout << "�й� : " << number << endl;
    }
    void Think() { cout << "�ڽ��� ���忡�� ����" << endl; }
    void Study() { cout << "���θ� �մϴ�" << endl; }
};

void main()
{
    Student K("ȫ�浿", 9506299);
    K.Intro();		//�̸��� �й� ���
    K.Think();		// �θ��� �Լ��� ������
           //�θ��� Think() : "�θ��� ���忡�� ����" ���ڿ� ���
           //�ڽ��� Think() : "�ڽ��� ���忡�� ����" ���ڿ� ���
    K.Study();		// �ڽĸ� ������ �ִ� �Լ�
                    // "���θ� �մϴ�" ���ڿ� ���
}
