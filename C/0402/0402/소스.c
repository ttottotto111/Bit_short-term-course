#include <stdio.h>
#include <stdlib.h> //rand

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

void exam1()
{
	int num;
	int arr[3]; //�迭����
	
	//���� �ʱ�ȭ
	num = 10;
	arr[0] = 20;
	arr[1] = 30;
	arr[2] = 40;

	//���� �ʱ�ȭ scanf_s
	printf(">> ���� �Է� : ");
	scanf_s("%d", &num);
	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[0]);
	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[1]);
	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[2]);

	//���� ���
	printf("���� ��� : %d\n", num);
	printf("���� ��� : %d\n" ,arr[0]);
	printf("���� ��� : %d\n" ,arr[1]);
	printf("���� ��� : %d\n", arr[2]);

}

//3���� ������ �����Ҽ� �ִ� num �迭 ���� ����� �Է������� 3�� �Է¹ް� 
//����� ������ �� result�� ���� �� ���
void exam2()
{
	int num[3];
	int result;
	printf("���� �Է� : ");
	scanf_s("%d", &num[0]);
	printf("���� �Է� : ");
	scanf_s("%d", &num[1]);
	printf("���� �Է� : ");
	scanf_s("%d", &num[2]);
	result = num[0] + num[1] + num[2];
	printf("������ �� : %d\n", result);
}

/*
4���� ������ �Է¹޴� arr�迭���� 4���Է¹ް� ���� result�� ����
�����  average�� ���� ��� ���
*/
void exam3()
{
	int arr[4], result;
	float average;
	printf("���� �Է� : ");
	scanf_s("%d", &arr[0]);
	printf("���� �Է� : ");
	scanf_s("%d", &arr[1]);
	printf("���� �Է� : ");
	scanf_s("%d", &arr[2]);
	printf("���� �Է� : ");
	scanf_s("%d", &arr[3]);

	result = arr[0] + arr[1] + arr[2] + arr[3];
	average = result / 4.0f; //4.0�� ���̸� double 4.0f���� ���̸� float
							 //(float)result /4;�� ����
	printf("������ �� : %d\n", result);
	printf("������ ��� : %.1f\n", average);
}

#define MAXDATA 100
void exam4()
{
	int arr[MAXDATA];
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < MAXDATA; i++)
	{
		arr[i] = rand()%100;
	}

	//��ü ���
	for (int i = 0; i < MAXDATA; i++)
	{
		if (i % 20 == 0 && i!=0)
			printf("\n");

		printf("%3d", arr[i]);
	}
	printf("\n");

}

//����
void exam5()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++) 
	{
		//rand()%100 -0~99 ���̰�
		int r = (rand() % 99)+1; //1~99
		printf("%d\n", r);
	}
}

/*
������ 1000�� ������ �� �ִ� arrnum �迭�� ����
1~99 ������ �������� �߻����� �ʱ�ȭ
�迭�� ����� ��� ����� �հ� ����� ���
����ڷκ��� 1~99 ���� ���Է¹޾� � ����Ǿ��ִ��� Ȯ��
*/
#define MAXDATA1 100
void exam6()
{
	// ���� ����
	int arrnum[MAXDATA1],sum=0;
	double average=0;
	srand((unsigned)time(NULL));

	//�ʱ�ȭ
	for (int i = 0; i < MAXDATA1; i++)
	{
		arrnum[i] = (rand() % 99) + 1;
	}

	//����
	for (int i = 0; i < MAXDATA1; i++)
	{
		if (i % 20 == 0 && i != 0)
			printf("\n");
		printf("%2d ", arrnum[i]);
		sum = sum + arrnum[i];
	}
	average = (double)sum / MAXDATA1;

	printf("\n�հ� : %d\n", sum);
	printf("��� : %.1lf\n", average);

	int num;
	int count=0;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	for (int i = 0; i < MAXDATA1; i++)
	{
		if (arrnum[i] == num)
		{
			count++;
		}
	}

	printf("ã�� ������ ���� : %d\n", count);

}