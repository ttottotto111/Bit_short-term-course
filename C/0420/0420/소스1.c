#include <stdio.h>

void input_today(int *y, int *m, int *d)
{
	*y = 2020;
	*m = 4;
	*d = 20;
}

int printf_date(int y, int m, int d)
{
	printf("%04d-%02d-%02d\n", y, m, d);
}

int change_nextday(int *y,int *m,int *d)
{
	*d = *d + 1;
}

int main()
{
	//���� ����
	int year;
	int month;
	int day;

	//���� ��¥�� ����
	input_today(&year, &month, &day);


	//��¥�� ���
	printf_date(year, month, day);

	//������¥�� ����
	change_nextday(&year, &month, &day);

	//��¥�� ���
	printf_date(year, month, day);
}