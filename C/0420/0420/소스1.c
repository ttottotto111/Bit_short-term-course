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
	//변수 선언
	int year;
	int month;
	int day;

	//오늘 날짜를 저장
	input_today(&year, &month, &day);


	//날짜를 출력
	printf_date(year, month, day);

	//다음날짜로 변경
	change_nextday(&year, &month, &day);

	//날짜를 출력
	printf_date(year, month, day);
}