/************************************************************
�Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
       �̸�, ��ȭ��ȣ�� �����迭��,
    char* name;	// �����ڿ��� ���� �޸� �Ҵ�, �Ҹ��ڿ��� �޸� ����
    char* phone;         // �����ڿ��� ���� �޸� �Ҵ�, �Ҹ��ڿ��� �޸� ����
    char compnayname[20];
             char position[20];
*************************************************************/
#include <iostream>
using namespace std;

class NameCard
{
private:
    char* name;
    char* phone;
    char companyname[20];
    char position[20];

public:
    NameCard(const char* _name,const char* _phone,const char* _companyname,const char* _position)
    {
        name = new char[strlen(_name) + 1];
        strcpy_s(name, strlen(_name) + 1, _name);

        phone = new char[strlen(_phone) + 1];
        strcpy_s(phone, strlen(_phone) + 1, _phone);

        strcpy_s(companyname, sizeof(companyname), _companyname);

        strcpy_s(position, sizeof(position), _position);
    }
    ~NameCard()
    {
        delete[] name;
        delete[] phone;
    }

    void ShowData()
    {
        cout << "��    �� : " << name << endl;
        cout << "��ȭ��ȣ : " << phone << endl;
        cout << "ȸ    �� : " << companyname<< endl;
        cout << "��    �� : " << position << endl;
    }

};

int main(void)
{
    NameCard Lee("Lee Hun", "333-3333", "freelec", "manager");
    Lee.ShowData();   //����� ���ٿ� �� ������ : ex) �̸� : Lee Hun
                            //                                          ��ȭ��ȣ : 3333-3333
    return 0;
}