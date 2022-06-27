/************************************************************
�Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
       Student Ŭ������ �Ʒ��� �ɹ������� �Ʒ��� ����.
       char number[20],  char name[20],  , int score
*************************************************************/
#include <iostream>
using namespace std;

class Student
{
private:
    char number[20];
    char name[20];
    int score;

public:
    Student(const char* _number) : name(" "), score(0)
    {
        strcpy_s(number, sizeof(number), _number);
    }
    
    void SetName(const char* _name)
    {
        strcpy_s(name, sizeof(name), _name);
    }

    void SetScore(int _score)
    {
        score = _score;
    }

    const char* GetStNum() { return number; }
    const char* GetName() { return name; }
    int GetScore() { return score; }
};

void main()
{
    Student Kim("8906123");	// number�� ���޵������� �ʱ�ȭ, name�� "", score�� 0���� �ʱ�ȭ
    Kim.SetName("ȫ�浿");  // �̸� ����
    Kim.SetScore(99);	// �� �ش� Set�޼��忡�� 0~100��  ���� ó���� �� �ֵ��� �Ұ� 
                                      // �� �̿��� ���� ������ ����

    cout << "�й� : " << Kim.GetStNum() << endl;   // GetStNum() : �й� ��ȯ
    cout << "�̸� : " << Kim.GetName() << endl;    // GetName() : �̸� ��ȯ
    cout << "���� : " << Kim.GetScore() << endl;     // GetScore() : ���� ��ȯ
}