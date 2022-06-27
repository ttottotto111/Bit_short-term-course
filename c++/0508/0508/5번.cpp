/************************************************************
아래 코드가 실행될 수 있는 클래스 구현
       이름, 전화번호는 동적배열로,
    char* name;	// 생성자에서 동적 메모리 할당, 소멸자에서 메모리 해제
    char* phone;         // 생성자에서 동적 메모리 할당, 소멸자에서 메모리 해제
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
        cout << "이    름 : " << name << endl;
        cout << "전화번호 : " << phone << endl;
        cout << "회    사 : " << companyname<< endl;
        cout << "직    위 : " << position << endl;
    }

};

int main(void)
{
    NameCard Lee("Lee Hun", "333-3333", "freelec", "manager");
    Lee.ShowData();   //출력은 한줄에 한 정보씩 : ex) 이름 : Lee Hun
                            //                                          전화번호 : 3333-3333
    return 0;
}