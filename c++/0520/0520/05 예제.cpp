//05_예제.cpp
/*
[추상화과정 : 맴버변수, 맴버함수를 추출하는 과정]
일반계좌, 계좌번호, 이름, 잔액              / 입금(), 출금(), 정보출력()
신용계좌, 계좌번호, 이름, 잔액				/ 입금(), 출금(), 정보출력()
기부계좌, 계좌번호, 이름, 잔액, 기부금총액  / 입금(), 출금(), 정보출력()

- 일반계좌에 입금할 떄는 입금액을 그대로 잔액에 추가한다.
   입금(1000) --> 잔액 = 잔액 + 1000
- 신용계좌에 입금할 때는 입금액의 1%를 이자로 추가 지급한다.
   입금(1000) --> 잔액 = 잔액 + 1000 + (1000*0.01)
- 기부계좌에 입금할 때는 입금액의 1%를 기부금으로 납부한다.
   입금(1000) --> 잔액 = 잔액 + 1000 - (1000*0.01)
              --> 기부금총액 = 기부금총액 + (1000*0.01)
*/
#include <iostream>
using namespace std;
#include <Windows.h>
#include <conio.h>

class Account
{
private:
    int accid;
    char name[20];
    int balance;

public:
    Account(int _accid, const char* _name)
    {
        accid = _accid;
        strcpy_s(name, sizeof(name), _name);
        balance = 0;
    }

    Account(int _accid, const char* _name, int _balance)
    {
        accid = _accid;
        strcpy_s(name, sizeof(name), _name);
        balance = _balance;
    }

public:
    virtual bool InputMoney(int money)
    {
        if (money < 0)
            return false;

        balance = balance + money;
        return true;
    }

    int OutputMoney(int money)
    {
        if (money < 0)
            return -1;

        if (money > balance)
            return -2;

        balance = balance - money;
        return 1;
    }

    virtual void PrintData() const
    {
        cout << "[계좌번호] " << accid << "\t";
        cout << "[이름] " << name << "\t";
        cout << "[잔액] " << balance << "원" << "\t";
    }
};

class FaithAccount : public Account
{
public:
    FaithAccount(int _accid, const char* _name) : Account(_accid, _name)
    {
    }
    FaithAccount(int _accid, const char* _name, int _balance)
        : Account(_accid, _name, (int)(_balance + _balance * 0.01))
    {
    }

public:
    //입금(1000) --> 잔액 = 잔액 + 1000 + (1000*0.01) 
    bool InputMoney(int money)
    {
        return Account::InputMoney((int)(money + money * 0.01));
    }
};

class ContriAccount : public Account
{
private:
    int contribution;

public:
    ContriAccount(int _accid, const char* _name) : Account(_accid, _name)
    {
        contribution = 0;
    }
    ContriAccount(int _accid, const char* _name, int _balance)
        : Account(_accid, _name, (int)(_balance - _balance * 0.01))
    {
        contribution = (int)(_balance * 0.01);
    }

public:
    bool InputMoney(int money)
    {
        if (Account::InputMoney((int)(money - money * 0.01)) == false)
            return false;

        contribution = contribution + (int)(money * 0.01);
        return true;
    }

    void PrintData() const
    {
        Account::PrintData();

        cout << "[기부금총액] " << contribution << "원" << "\t";
    }
};

int main()
{
    //================ init =====================================
    srand((unsigned int)time_t(NULL));

    Account* acclist[3];
    acclist[0] = new Account(1111, "홍일반");
    acclist[1] = new FaithAccount(2222, "이신용");
    acclist[2] = new ContriAccount(333, "최기부");

    cout << "시뮬레이션을 시작합니다. 아무키나 누르세요";
    _getch();   //#include <conio.h>
    //================= run ====================================
    while (true)
    {
        system("cls");

        //정보 렌덤하게 생성 & 입출금금액
        int io = rand() % 10;       //0~9
        int money = ((rand() % 9) + 1) * 10000; //10000~90000

        //입/출력연산(모든 계좌에 적용)
        if (io >= 8)        //입금
        {
            cout << "[입금] " << money << "원" << endl;
            for (int i = 0; i < 3; i++)
            {
                acclist[i]->InputMoney(money);
            }
        }
        else                //출금
        {
            cout << "[출금] " << money << "원" << endl;
            for (int i = 0; i < 3; i++)
            {
                acclist[i]->OutputMoney(money);
            }
        }

        //결과출력
        for (int i = 0; i < 3; i++)
        {
            acclist[i]->PrintData();    cout << endl;
        }

        Sleep(500); //0.5초 멈추기      #include <Windows.h>
    }


    return 0;
}