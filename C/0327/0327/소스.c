#include <stdio.h>

void exam1();
void exam2();
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

void exam1()
{
// 1.1
	printf("*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf("�̸� : ȫ�浿\n");
	printf("���� : 23\n");
	printf("��ȭ��ȣ : 010-0000-0000\n");
	printf("*-*-*-*-*-*-*-*-*-*-*-*-");
}

void exam2()
{
	//1.2
	printf("*****************************************\n");
	printf("*\t�̸� : ȫ�浿\t\t\t*\n");
	printf("*\t���� : 23\t\t\t*\n");
	printf("*\t��ȭ��ȣ : 010-0000-0000\t*\n");
	printf("*****************************************");
}

void exam3()
{
	//2
	char a, b, c, d;
	int a10, b10, c10, d10;
	int a16, b16, c16, d16;
	a=a10=a16 = 'A';
	b =b10=b16= 'B';
	c=c10=c16 = 'C';
	d =d10=d16= 'D';
	printf("*********************************\n");
	printf("����\t10����\t16����\n");
	printf("%c\t%d\t0x%x\n",a,a10,a16);
	printf("%c\t%d\t0x%x\n", b, b10, b16);
	printf("%c\t%d\t0x%x\n", c, c10, c16);
	printf("%c\t%d\t0x%x\n", d, d10, d16);
	printf("*********************************");
}

void exam4()
{
//3
	int a, b;
	float c;
	char d,e,f;
	printf("���� �� : ");
	scanf_s("%d", &a);
	printf("����� ������ ��� %d�� �Դϴ�.\n", a);
	printf("-----------------------------------\n");
	printf("���� : ");
	scanf_s("%d", &b);
	printf("��� : ");
	scanf_s("%f", &c);
	printf("����� �ְ� ����� %d���� %.1f���Դϴ�.\n", b, c);
	printf("-----------------------------------\n");
	printf("�����Է�(3��) : ");
	scanf_s(" %c %c %c", &d,sizeof(char), &e,sizeof(char), &f,sizeof(char));
	printf("C��� : %c\n", d);
	printf("CPP��� : %c\n", e);
	printf("�ڷᱸ�� : %c\n", f);
}

void exam5()
{
	//4
	int a, b, c, d;
	a = sizeof(char);
	b = sizeof(int);
	c = sizeof(float);
	d = sizeof(double);
	printf("type\tsize\n");
	printf("-----------------\n");
	printf("char \t %d\n", a);
	printf("int \t %d\n", b);
	printf("float \t %d\n", c);
	printf("double \t %d\n", d);
}

void exam6()
{
	//5
	int a;
	char b;

	printf("���� : ");
	scanf_s("%c", &b, sizeof(b));
	printf("�� : %d\n", b);
	printf("--------------------\n");
	printf("���� : ");
	scanf_s("%d", &a);
	printf("���� : %c", a);
}

void exam7()
{
//6
	int result1, result3;
	float  a, b, result2,result4;
	printf("����1 : ");
	scanf_s("%f", &a);
	printf("����2 : ");
	scanf_s("%f", &b);
	result1 = a + b;
	result2 = a - b;
	result3 = a * b;
	result4 = a / b;
	printf("%.0f + %.0f = %d\n", a, b, result1);
	printf("%.0f - %.0f = %.0f\n", a, b, result2);
	printf("%.0f * %.0f = %d\n", a, b, result3);
	printf("%.0f / %.0f = %.1f\n", a, b, result4);
}

void exam8()
{
//7
	float a, b, c, result2;
	int result1;
	printf("3���� ���� �Է� : ");
	scanf_s(" %f %f %f", &a, &b, &c);
	result1 = a + b + c;
	result2 = (a + b + c) / 3;
	printf("�� : %d\n", result1);
	printf("��� : %.1f", result2);
}

void exam9()
{
	//9
	int a;
	printf("���� �Է� : ");
	scanf_s("%d", &a);
	printf("��� : %d", a>=60);
}

void exam10()
{
	//10
	int a;
	printf("���� �Է� : ");
	scanf_s("%d", &a);
	printf("��� : %d", a%2 !=1);
}