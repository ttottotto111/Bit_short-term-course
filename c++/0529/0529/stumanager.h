//stumanager.h
#pragma once

#include <vector>
using namespace std;
#include "stu.h"

class stuManager
{
	vector<Stu*> base;// Stu* base[10];
	const int max;
public:
	stuManager();
	~stuManager();

public:
	void Run();

private:
	keydata SelectMenu();
	int SetMaxStu();
	void ListAll();
	void AddStu();	//insert
	void RemoveStu();//delete
	void SearchStuByNum();	//select
	void SearchStuByName(); //select
	void UpdateStu();
};
