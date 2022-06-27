//accmanager.h
#pragma once

#include <vector>
using namespace std;
#include "account.h"

class accManager
{
	vector<Account*> base;// Account* base[10];
	const int max;

public:
	accManager();
	~accManager();

public:
	void Run();

private:
	keydata SelectMenu();
	int SetMax();
	void ListAll();
	void AddAccount();	//insert
	void RemoveAccount();//delete
	void SearchAccountByNum();	//select
	void SearchAccountByName(); //select
	void UpdateInputAccount();
	void UpdateOutputAccount();

	int NumberToIdx(int accnumber);
};