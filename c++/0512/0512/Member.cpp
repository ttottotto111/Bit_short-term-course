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
	cout << (gender == 'm' ? "남" : "여") << "\t";
	cout << phone << endl;
}


void Member::Println()
{
	cout << "번    호 : " << number << endl;;
	cout << "이    름 : " << name << endl;
	cout << "성    별 : "<<(gender == 'm' ? "남" : "여") << endl;
	cout << "전화번호 : "<<phone << endl;
}
