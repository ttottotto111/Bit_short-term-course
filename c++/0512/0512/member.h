#pragma once
class Member
{
private:
	int number;		//ȸ����ȣ
	char name[20];	//�̸�
	char gender;	//����
	char phone[20];	//��ȭ��ȣ

public:
	Member(int _number, const char* _name, char _gender, const char* _phone);

public:
	int GetNumber() { return number; }
	const char* GetName() { return name; }
	char GetGender() { return gender; }
	const char* GetPhone() { return phone; }
	//���� value�� ���� ���� �˻� (��� �������� ������)
	void SetNumber(int value) { number = value; }
	void SetName(const char* value) { strcpy_s(name, sizeof(name), value); }
	void SetGender(char value) 
	{ 
		if(gender =='m' || gender =='f')
		gender ==value;
	}
	void SetPhone(const char* value) { strcpy_s(phone, sizeof(phone), value); }

public:
	void Print();
	void Println();
};
