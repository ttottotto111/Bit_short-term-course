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
void exam13();

void main()
{
	exam4();
}

void exam1()
{
	int a, b, c;
	a = 2000;
	b = 3000;
	c = a * b;

	printf("%d * %d = %d\n",a, b, c);
}


void exam2()
{
	char ch1 = 'A';
	ch1 = ch1 + 1;
	printf("�ƽ�Ű �ڵ尪 : %d, %c", ch1, ch1);
}

void exam3()
{
	//���� ������
	int a = 1;
	int b;

	b = ++a;

	printf("%d,%d\n", a,b); 

	//��ġ : ������ ���� �� ����
	int a1 = 1;
	int b1;

	b1 = a1++; // b1=1

	printf("%d,%d\n",a1,b1);

}

void exam4()
{
	int a = 1;
	int b;

	//�ϳ��� �����ȿ��� ������ ���� �����ϴ�.
	b = ++a + ++a + ++a; //b=4+4+4

	printf("%d,%d\n", a, b); //4,12

	int a1 = 1;
	int b1;

	b1 = a1++ + a1++ + a1++;
	printf("%d,%d\n", a1, b1);
}

void exam5()
{
	int a = 1;
	int b;
	b = ++a + a++ + ++a + ++a;

	printf("%d,%d\n", a, b);
}

void exam6()
{

	int number = 93; //90���� ũ�ų� ���� 100���� �۰ų� ����?
	int result = 90 <= number && number <= 100;
		printf("%d\n", result);
}


void exam7() 
{
	//����1: ������ 2�� �Է¹ް� �μ��� ���� ����� ����Ͻÿ�
	int a, b, result;

	printf("����1 �Է� : ");
	scanf_s("%d", &a);
	printf("����2 �Է� : ");
	scanf_s("%d", &b);

	result = a * b;
	printf("%d *%d = %d\n",a,b, result);
}

void exam8()
{
	//����2. ���ڸ� 2�� �Է¹ް� ù��° ���ڰ� ũ��1, ������0 ���
	char ch1, ch2;
	int result;

	printf("����1 �Է� : ");
	scanf_s("%c", &ch1, sizeof(ch1));
	getchar();
	printf("����2 �Է� : ");
	scanf_s("%c", &ch2, sizeof(ch2));

	result = ch1 > ch2;
	printf("%d", result);
}

void exam9()
{
//�Է¹��� ���� n�� 5�γ��� ��� ������
	int a, result, result2;
	printf("���� �Է� : ");
	scanf_s("%d", &a);
	result = a / 5;
	result2 = a % 5;
	printf("���� : %d\n", a);
	printf("�� : %d\n", result);
	printf("������ %d\n: ", result2);
}

void exam10()
{
//�������� �Է¹ް� ���� �ѷ� ���ϴ� ���α׷�
	int a;
	float result;
	printf("������ �Է� : ");
	scanf_s("%d", &a);
	result = 2 * 3.1416 * a;
	printf("������ : %d\n", a);
	printf("�ѷ� : %.2f", result);
}

void exam11()
{
//�����µ��� �Է¹޾� ȭ���� ǥ��
	float a, result;
	printf("�����µ� �Է� : ");
	scanf_s("%f", &a);
	result = a * (9 / 5) + 32;
	printf("���� : %.0f\n", a);
	printf("ȭ�� : %.1f", result);
}

void exam12()
{
//�ҹ��ڸ� �Է¹޾� �빮�ڷ� ��ȯ
	char a;
	int result;
	printf("�ҹ��� �Է� : ");
	scanf_s("%c", &a);
	result = a - 32;
	printf("�Է�(�ҹ���) : %c\n", a);
	printf("��ȯ(�빮��) : %c", result);
}

void exam13()
{
//����3�� �Է¹ް� �� �հ� ���
	int a, b, c;
	float result1, result2;
	printf("����1 �Է� : ");
	scanf_s("%d", &a);
	printf("����2 �Է� : ");
	scanf_s("%d", &b);
	printf("����3 �Է� : ");
	scanf_s("%d", &c);
	result1 = a + b + c;
	result2 = result1 / 3;
	printf("����1 : %d\n", a);
	printf("����2 : %d\n", b);
	printf("����3 : %d\n", c);
	printf("--------------------\n");
	printf("�հ� : %.0f\n", result1);
	printf("��� : %.0f", result2);
}