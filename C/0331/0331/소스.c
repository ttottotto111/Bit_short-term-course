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

//�ݺ��� while
void exam1()
{
	int i = 0;

	while (i<5) //������ ���̸� while�� ����
	{
		printf("[%d] Hello, World!\n", i);
		i++;
	}
}

// 1���ڸ� Ȧ���� ���
void exam2()
{
	int i = 1;

	while (i < 10) //������ ���̸� while�� ����
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
	printf("���� ����� : %d", sum);
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

//����ڷκ��� 0�� �Է��� ������ �ݺ��ؼ� ������ �Է� �޾ƶ�.
void exam6()
{
	while (1) //1 : �� => ���ѷ���
	{
		int num;
		printf(">>������ �Է� : ");
		scanf_s("%d", &num);

		if (num == 0) //break : �ݺ����� �����ϴ� Ű����
		{
			break;
		}
	}
}