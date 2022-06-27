//stu.h
#pragma once

#include "wbglobal.h"

class Stu
{
	const int num;	//상수 멤버 변수
	int c;			//성적
	int cpp;		//성적
	int java;		//성적
	float average;	//평균
	char name[20];

public:
	Stu(int _num, const char* _name) : num(_num), c(0), cpp(0), java(0)
	{
		strcpy_s(name, sizeof(name), _name);
		average = 0.0f;
	}


	int GetNum() const { return num; }

	const char* GetName() const { return name; }

	void SetName(const char* value)
	{
		strcpy_s(name, sizeof(name), value);
	}

	void SetJumsu(int _c, int _cpp, int _java)
	{
		c = _c;
		cpp = _cpp;
		java = _java;
		average = (c + cpp + java) / 3.0f;
	}

	friend ostream& operator<<(ostream& os, Stu* stu)
	{
		os << "번호:" << stu->num << "이름:" << stu->name;
		os << "C언어:" << stu->c << "c++언어:" << stu->cpp;
		os << "java언어:" << stu->java << "평균:" << stu->average;
		return os;
	}

};