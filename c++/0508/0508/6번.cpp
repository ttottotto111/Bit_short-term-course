/************************************************************
  08. ���� ��� ����� �����ϴ� Ŭ������ �����Ͻÿ�.
		��� :
		2020/5/8
		2020/5/8
		2020/5/8
		true
		false
*************************************************************/
#include <iostream>
using namespace std;

class  Date			// 1) Ŭ������ 
{
	int year;	int month;	int day;
public:
	//2) ���ڸ� 3�� �޴� ������
	Date(): year(2020), month(5), day(8)
	{

	}
	//3) print �޼���
	void print()
	{
		cout << year << "/" << month << "/" << day << endl;
	}


   //4) ��ü�� ���ڷ� �޴� cmp �޼���
	int cmp(Date arr)
	{
		if (year == arr.year && month == arr.month && day == arr.day)
			return 1;
		return 0;
	}


   //5) ������ ���� 3���� �޴� cmp �޼���
	int cmp(int _year, int _month, int _day)
	{
		if (year == _year && month == _month && day == _day)
			return 1;
		return 0;
	}


};

void main()
{
	Date arr[3];         int i;

	for (i = 0; i < 3; i++)
		arr[i].print();// ��� 2020/5/8 

	arr[1].cmp(arr[0]) ? cout << "true" << endl : cout << "false" << endl;
	arr[1].cmp(1990, 2, 1) ? cout << "true" << endl : cout << "false" << endl;
}
