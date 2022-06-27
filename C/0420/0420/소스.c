#include <stdio.h>

int main()
{
	//변수 선언
	int year;
	int month;
	int day;

	//오늘 날짜를 저장
	year = 2020;
	month = 4;
	day = 20;

	//날짜를 출력
	printf("%04d-%02d-%02d\n", year, month, day);

	//다음날짜로 변경
	day = day + 1;

	//날짜를 출력
	printf("%04d-%02d-%02d\n", year, month, day);
}