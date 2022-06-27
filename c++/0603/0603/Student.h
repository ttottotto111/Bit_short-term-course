//Student.h

#pragma once

class Student
{
private:
	const int num;
	char name[20];
	int c;
	int cpp;
	int java;
	float average;

public:
	Student(int _num, const char* _name);

public:
	void Print() const;
	void Println() const;
	void SetJumsu(int _c, int _cpp, int _java);

public:
	int GetNum() const { return num; }
	const char* GetName() const { return name; }
};

class CompareByNumber	//���� ��� number
{
	int num;
public:
	//���� ���� �����ڸ� ���� ���޹޾� �ɹ������� ����
	CompareByNumber(int _number) : num(_number) {}

	//find_if���� �ݺ������� ȣ��Ǵ� �κ�
	//vector<Account*> �� ������� �ֱ� ������ �̶� ���޵Ǵ� Ÿ����
	bool operator()(Student* value)
	{
		return (value->GetNum() == num);
	}
};

class CompareByName	//���� ��� name
{
	char name[20];
public:
	//���� ���� �����ڸ� ���� ���޹޾� �ɹ������� ����
	CompareByName(const char* _name)
	{
		strcpy_s(name, sizeof(name), _name);
	}

	//find_if���� �ݺ������� ȣ��Ǵ� �κ�
	//vector<Account*> �� ������� �ֱ� ������ �̶� ���޵Ǵ� Ÿ����
	//�Լ���ü.....
	bool operator()(Student* value)
	{
		return (strcmp(value->GetName(), name) == 0);
	}
};