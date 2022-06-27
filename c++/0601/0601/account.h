//account.h
#pragma once

#include "wbglobal.h"
#include<time.h>

class Account
{
	const int accnumber;	//상수멤버변수
	char name[20];
	int balance;			//잔액
	tm tmc;					//개설일

public:
	Account(int _num, const char* _name) : accnumber(_num)
	{
		strcpy_s(name, sizeof(name), _name);
		balance = 0;
		//계좌생성될 때 현재 일시를 저장
		time_t t = time(0); //#include <time.h>
		localtime_s(&tmc, &t);
	}

	Account(int _num, const char* _name, int _balance, int y, int m, int d) 
		: accnumber(_num)
	{
		strcpy_s(name, sizeof(name), _name);
		balance = _balance;

		//계좌생성될 때 현재 일시를 사용
		tmc.tm_year = y - 1900;
		tmc.tm_mon = m - 1;
		tmc.tm_mday = d;
	}

	//Get 메서드
public:
	int GetNumber() const { return accnumber; }
	const char* GetName() const { return name; }
	int GetBalance() const { return balance; }
	tm GetTm() const { return tmc; }

	//Set 메서드
	void SetName(const char* value)
	{
		strcpy_s(name, sizeof(name), value);
	}

public:
	//입금, 출금
	void InputMoney(int money)
	{
		if (money <= 0)
			throw "잘못된 입금액입니다.";
		if (money > balance)
			throw "잔액이 부족합니다.";
		balance += money;
	}
	void OutputMoney(int money)
	{
		if (money <= 0)
			throw "잘못된 출금액입니다.";
		if (money > balance)
			throw "잔액이 부족합니다.";
		balance -= money;
	}

	friend ostream& operator<<(ostream& os, Account* acc)
	{
		os << "계좌번호:" << acc->accnumber << " 이름:" << acc->name;
		os << " 잔액:" << acc->balance << "원";

		char str[80];
		strftime(str, sizeof(str), "%y-%m-%d %H:%M:%S", &acc->tmc);
		os << " 개설일시:" << str;
		return os;

	}
};