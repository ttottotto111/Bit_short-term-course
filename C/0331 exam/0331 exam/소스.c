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

//1��
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
	printf("for���� �̿��� �հ� : %d\n", sum1);
	printf("while���� �̿��� �հ� : %d\n", sum2);
	printf("do ~ while���� �̿��� �հ� : %d", sum3);
}

//2��
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
	printf("�հ�(for) : %d\n", sum1);
	printf("�հ�(while) : %d\n", sum2);
	printf("�հ�(do) : %d", sum3);
}

//3��
void exam3()
{
	int i = 0;
	int sum = 0;
	while (1)
	{
		printf("����(����0) : ");
		scanf_s("%d", &i);
		sum = sum + i;
		if(i==0)
			break;
	}
	printf("�հ� : %d", sum);
}

//4��
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

//5��
void exam5()
{
	int i;
	int a = 1234;
	while (1)
	{
		printf("��ȣ : ");
		scanf_s("%d", &i);
		if (i == a)
		{
			printf("��ȣ ��ġ\n");
			break;
		}
		else
		{
			printf("��ȣ ����ġ\n");
		}
	}
}

//6��
void exam6()
{
	int a,i;
	int result;
	printf("��<2-9> : ");
	scanf_s("%d", &i);
	for (a = 1; a <= 9; a++)
	{
		result = i * a;
		printf("%d * %d = %2d\n", i, a, result);
	}
}

//7��
void exam7()
{
	int i;
	float sum;
	printf("����\tȭ��\n");
	printf("-----------------------\n");
	for (i = 0; i <= 100; i = i + 10)
	{
		sum = i * 1.8 + 32;
		printf("%2d \t %.1f\n",i,sum);
	}
}

//8��
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

//9��
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

//10��
void exam10()
{
	char ch;
	for (;;)
	{
		printf(">>���� �Է� : ");
		scanf_s("%c", &ch, sizeof(ch));
		getchar();

		if (ch =='X')
		{
			break;
		}
	}
	printf("�ݺ����� �����մϴ�.");
}