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
void exam11();
void exam12();

void main()
{
	exam1();
}

void exam1()
{
	// 1-1��
	int n;
	n = 2;
	if (n >= 0)
		printf("���ǿ� ����.\n");
	else
		printf("���ǿ� �����\n");
}

void exam2()
{
	//1.2��
	int n;
	n = 15;
	if (n % 3 == 0 && n % 5 == 0)
		printf("���ǿ� ����");
	else
		printf("���ǿ� �����");
}

void exam3()
{
	//1.3��
	char ch;
	ch = 'A';
	if (ch >= 'A' && ch <= 'Z')
		printf("�빮�� �Դϴ�.");
	else
		printf("�ҹ��� �Դϴ�.");
}

void exam4()
{
	//1.4��
	float n;
	n = 6;
	if (n < -5 || n>5)
		printf("���ǿ� ����\n");
	else
		printf("���ǿ� �����\n");
}

void exam5()
{
	//1.5��
	int n;
	n = 6;
	if (n % 2 != 1)
		printf("Ȧ���� �ƴմϴ�");
	else
		printf("Ȧ���Դϴ�");
}

void exam6()
{
	//2��
	int n;
	printf("���� : ");
	scanf_s("%d", &n);

	if (n >= 60)
		printf("��� : �հ�");
	else
		printf("��� : ���հ�");
}

void exam7()
{
//3��
	int a, b, c;
	printf("����(3��) : ");
	scanf_s(" %d %d %d", &a, &b, &c);
	
	if (a + b + c <= 180)
		printf("��� : ����");
	else
		printf("��� : �Ұ���");
}

void exam8()
{
	//4��
	int N;
	printf("���� : ");
	scanf_s("%d", &N);

	if (N % 2 != 0)
		printf("��� : Ȧ��");
	else
		printf("��� : ¦��");
}

void exam9()
{
	//5��
	int a, b, c, d, e;
	int sum1, sum2;
	sum1 = sum2 = 0;
	printf("����(5��) : ");
	scanf_s(" %d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a> 0)
		sum1 = sum1 + a;
	else
		sum2 = sum2 + a;
	if (b> 0)
		sum1 = sum1 + b;
	else
		sum2 = sum2 + b;
	if (c> 0)
		sum1 = sum1 + c;
	else
		sum2 = sum2 + c;
	if (d> 0)
		sum1 = sum1 + d;
	else
		sum2 = sum2 + d;
	if (e> 0)
		sum1 = sum1 + e;
	else
		sum2 = sum2 + e;
	printf("����� �� : %d\n", sum1);
	printf("������ �� : %d\n", sum2);
}

void exam10() {
	float a, b;
	char ch;
	printf("����,�µ� : ");
	scanf_s("%c", &ch);
	scanf_s("%f", &a);
	printf("��ȯ : ");
	switch (ch)
	{
	case 'F':
	case 'f':b = ((float)5 / 9) * (a - 32);
		printf("C %.0f\n", b);
		break;
	case 'C':
	case 'c':b = ((float)9 / 5) * a + 32;
		printf("F %.0f\n",b);
		break;
	}
}

void exam11()
{
	char ch;
	printf("���� : ");
	scanf_s("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
		printf("��ȯ : %c", ch + 32);
	else
		printf("��ȯ : %c", ch - 32);
}

void exam12()
{
	int a;
	printf("���� : ");
	scanf_s("%d", &a);
	if (a >= 90)
		printf("���� : A");
	else if (a >= 80)
		printf("���� : B");
	else if (a >= 70)
		printf("���� : C");
	else if (a >= 60)
		printf("���� : D");
	else
		printf("���� : F");
}