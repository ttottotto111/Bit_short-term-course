#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam9();
void exam10();

void main()
{
	exam10();
}

//1번
void exam1()
{
	int a=0,b=0,c=0;
	int sum1=0,sum2=0,sum3 = 0;

	for (a = 1; a <= 10; a++)
	{
		sum1 = sum1 + a;
	}

	while (b <= 10)
	{
		sum2 = sum2 + b;
		b++;
	}

	do {
		sum3 = sum3 + c;
		c++;
	} while (c <= 10);
	printf("for문을 이용한 합계 : %d\n", sum1);
	printf("while문을 이용한 합계 : %d\n", sum2);
	printf("do ~ while문을 이용한 합계 : %d", sum3);
}

//2번
void exam2()
{
	int a =0, b=0 , c=0 ;
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for (a = 1; a <= 100; a = a + 2)
	{
		sum1 = sum1 + a;
	}

	while (b <= 100)
	{
	
		if (b % 2 == 1)
		{
			sum2 = sum2 + b;
			b++;
		}
		else
		{
			b++;
		}
	}

	do {
		if (c % 2 == 1)
		{
			sum3 = sum3 + c;
			c++;
		}
		else
		{
			c++;
		}
	} while (c <= 100);
	printf("합계(for) : %d\n", sum1);
	printf("합계(while) : %d\n", sum2);
	printf("합계(do) : %d", sum3);
}

//3번
void exam3()
{
	int i = 0;
	int sum = 0;
	while (1)
	{
		printf("정수(종료0) : ");
		scanf_s("%d", &i);
		sum = sum + i;
		if(i==0)
			break;
	}
	printf("합계 : %d", sum);
}

//4번
void exam4()
{
	char ch;
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		printf("%c ", ch);
	}
	printf("\n");
	for (ch = 'Z'; ch >= 'A'; ch--)
	{
		printf("%c ", ch);
	}
}

//5번
void exam5()
{
	int i;
	int a = 1234;
	while (1)
	{
		printf("암호 : ");
		scanf_s("%d", &i);
		if (i == a)
		{
			printf("암호 일치\n");
			break;
		}
		else
		{
			printf("암호 불일치\n");
		}
	}
}

//6번
void exam6()
{
	int a,i;
	int result;
	printf("단<2-9> : ");
	scanf_s("%d", &i);
	for (a = 1; a <= 9; a++)
	{
		result = i * a;
		printf("%d * %d = %2d\n", i, a, result);
	}
}

//7번
void exam7()
{
	int i;
	float sum;
	printf("섭씨\t화씨\n");
	printf("-----------------------\n");
	for (i = 0; i <= 100; i = i + 10)
	{
		sum = i * 1.8 + 32;
		printf("%2d \t %.1f\n",i,sum);
	}
}

//8번
void exam8()
{
	char i;

	for (i = 32; i <127; i++)
	{
		printf("%c ", i);

		if (i == 47)
			printf("\n");
		else if(i==63)
			printf("\n");
		else if (i == 79)
			printf("\n");
		else if (i == 95)
			printf("\n");
		else if (i == 111)
			printf("\n");
	}
}

//9번
void exam9()
{
	int i;
	for (i = 0; i <= 99; i++)
	{
		printf("%2d ", i);
		if (i == 9)
			printf("\n");
		else if (i ==19)
			printf("\n");
		else if (i == 29)
			printf("\n");
		else if (i == 39)
			printf("\n");
		else if (i == 49)
			printf("\n");
		else if (i == 59)
			printf("\n");
		else if (i == 69)
			printf("\n");
		else if (i == 79)
			printf("\n");
		else if (i == 89)
			printf("\n");
		else if (i == 99)
			printf("\n");
	}
}

//10번
void exam10()
{
	char ch;
	for (;;)
	{
		printf(">>문자 입력 : ");
		scanf_s("%c", &ch, sizeof(ch));
		getchar();

		if (ch =='X')
		{
			break;
		}
	}
	printf("반복문을 종료합니다.");
}