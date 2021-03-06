//stuManager.h
#pragma once

#include <vector>
#include "wbglobal.h"
#include "Student.h"
using namespace std;

class stuManager
{
private:
	vector<Student*> base;	//데이터 저장소

public:
	stuManager();
	~stuManager();

public:
	void Run();

private:
	keydata SelectMenu();
	void StuListAll();
	void StuInsert();
	void StuSelectNum();
	void StuSelectName();
	void StuRemove();
	void StuUpdate();
};