//account.h
#pragma once

#include "wbglobal.h"
#include<time.h>

class Account
{
	const int accnumber;	//����������
	char name[20];
	int balance;			//�ܾ�
	tm tmc;					//������

public:
	Account(int _num, const char* _name) : accnumber(_num)
	{
		strcpy_s(name, sizeof(name), _name);
		balance = 0;
		//���»����� �� ���� �Ͻø� ����
		time_t t = time(0); //#include <time.h>
		localtime_s(&tmc, &t);
	}

	Account(int _num, const char* _name, int _balance, int y, int m, int d) 
		: accnumber(_num)
	{
		strcpy_s(name, sizeof(name), _name);
		balance = _balance;

		//���»����� �� ���� �Ͻø� ���
		tmc.tm_year = y - 1900;
		tmc.tm_mon = m - 1;
		tmc.tm_mday = d;
	}

	//Get �޼���
public:
	int GetNumber() const { return accnumber; }
	const char* GetName() const { return name; }
	int GetBalance() const { return balance; }
	tm GetTm() const { return tmc; }

	//Set �޼���
	void SetName(const char* value)
	{
		strcpy_s(name, sizeof(name), value);
	}

public:
	//�Ա�, ���
	void InputMoney(int money)
	{
		if (money <= 0)
			throw "�߸��� �Աݾ��Դϴ�.";
		if (money > balance)
			throw "�ܾ��� �����մϴ�.";
		balance += money;
	}
	void OutputMoney(int money)
	{
		if (money <= 0)
			throw "�߸��� ��ݾ��Դϴ�.";
		if (money > balance)
			throw "�ܾ��� �����մϴ�.";
		balance -= money;
	}

	friend ostream& operator<<(ostream& os, Account* acc)
	{
		os << "���¹�ȣ:" << acc->accnumber << " �̸�:" << acc->name;
		os << " �ܾ�:" << acc->balance << "��";

		char str[80];
		strftime(str, sizeof(str), "%y-%m-%d %H:%M:%S", &acc->tmc);
		os << " �����Ͻ�:" << str;
		return os;

	}
};