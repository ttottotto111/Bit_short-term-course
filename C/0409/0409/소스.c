#include <stdio.h>

void printchar(char ch, int n);

void main()
{
	printchar('^',20);
	printchar('.',100);
}

void printchar(char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}

/*
foo함수는 총 3개의 변수를 생성
그중 2개의 변수를 매개변수
그중 1개의 변수를 지역변수
이 모든 변수는 foo의 stack메모리에 저장
따라서 foo를 호출하려면 반드시 int type 2개를 전달해야 한다.
*/
void foo(int n1, int n2)
{
	int n3;
}