#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

void main()
{
	exam6();
}

//반복문 while
void exam1()
{
	int i = 0;

	while (i<5) //조건이 참이면 while을 실행
	{
		printf("[%d] Hello, World!\n", i);
		i++;
	}
}

// 1의자리 홀수만 출력
void exam2()
{
	int i = 1;

	while (i < 10) //조건이 참이면 while을 실행
	{
		printf("[%d] ", i);
		i=i+2;
	}
}

void exam3()
{
	int sum = 0;
	int i = 1;
	while (i <= 10)
	{
		sum = sum + i;
		i++;
	}
	printf("합의 결과는 : %d", sum);
}

void exam4()
{
	int i = 1;

	do {
		printf("[%d] ", i);
		i++;
	} while (i <= 10);
}

void exam5()
{
	for (int i = 1; i < 10; i++)
	{
		printf("[%2d] ", i);
	}
}

//사용자로부터 0을 입력할 때까지 반복해서 정수를 입력 받아라.
void exam6()
{
	while (1) //1 : 참 => 무한루프
	{
		int num;
		printf(">>정수를 입력 : ");
		scanf_s("%d", &num);

		if (num == 0) //break : 반복문을 종료하는 키워드
		{
			break;
		}
	}
}