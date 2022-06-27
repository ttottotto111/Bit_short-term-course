//Member.cpp
#include <iostream>
using namespace std;
#include "Member.h"

Member::Member(int _number, const char* _name, char _gender, const char* _phone)
{
	number = _number;
	strcpy_s(name, sizeof(name), _name);
	gender = _gender;
	strcpy_s(phone, sizeof(phone), _phone);
}

void Member::Print()
{
	cout << number << "\t";
	cout << name << "\t";
	cout << (gender == 'm' ? "��" : "��") << "\t";
	cout << phone << endl;
}


void Member::Println()
{
	cout << "��    ȣ : " << number << endl;;
	cout << "��    �� : " << name << endl;
	cout << "��    �� : "<<(gender == 'm' ? "��" : "��") << endl;
	cout << "��ȭ��ȣ : "<<phone << endl;
}
