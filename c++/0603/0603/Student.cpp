//student.cpp
#include <iostream>
#include "Student.h"
using namespace std;


Student::Student(int _num, const char* _name) 
	: num(_num), c(0), cpp(0), java(0), average(0.0f)
{
	strcpy_s(name, sizeof(name), _name);
}

void Student::Print() const
{
	cout << num << ", ";
	cout << name << ", ";
	cout << c << ", " << cpp << ", " << java << ", " << average << endl;
}

void Student::Println() const
{
	cout << "번         호 : " << num << endl;
	cout << "이         름 : " << name << endl;
	cout << "C언어 점수    : " << c << endl;
	cout << "C++언어 점수  : " << cpp << endl;
	cout << "JAVA언어 점수 : " << java << endl;
	cout << "평         균 : " << average << endl;
}

void Student::SetJumsu(int _c, int _cpp, int _java)
{
	c = _c;
	cpp = _cpp;
	java = _java;
	average = (c + cpp + java) / 3.0f;
}
