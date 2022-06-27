#include <stdio.h>

//타입키워드 : struct tagdate == int 
//멤버리스트 : 정수를 3개 저장하는 타입 => 12byte
struct tagdate
{
	int year;
	int month;
	int day;
};

void input_today(struct tagdate *d)
{
	(*d).year = 2020;
	(*d).month = 4;
	(*d).day = 20;
}

void print_date(struct tagdate d)
{
	printf("%04d-%02d-%02d\n", d.year, d.month, d.day);
}

int change_nextday(struct tagdate *d)
{
	(*d).day = (*d).day + 1;
}

int main()
{
	//변수 선언
	struct tagdate d1;

	//오늘 날짜를 저장
	input_today(&d1);


	//날짜를 출력
	print_date(d1);

	//다음날짜로 변경
	change_nextday(&d1);

	//날짜를 출력
	print_date(d1);
}