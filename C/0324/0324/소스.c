#include <stdio.h> //������� : �ڵ带 �ۼ��Ҷ� �ʿ��� 
				   //�Լ��� ����θ� ������ �ִ� ����

void exam1();
void exam2();
void exam3();
void exam5();

void main()
{
	exam3();
}

void exam1()
{
	// 1. ����
	int num;	//����� ���� - ������ ������ �� �ִ� �������
	int num1;
	// 2. ����
	// 2-1 ���Կ��� (= : ���� ������)
	//	L value = R value
	// L value : �����, R value : ���尪
	num = 10;
	num1 = 20;
	// 3. cnffur
	printf("���� ��� : %d, %d \n", num, num1);
}

//������ ������ ���ִ� number����, number�� 1����
void exam2()
{
	int number;
	number = 1;
	printf("number =>%d\n", number);
	number = 11;
	printf("number =>%d\n", number);
}

/*
C���α׷����� �����Ǵ� Ÿ��
- ���� : int
- �Ǽ� : char
- ���� : double

������ ������ �� �ִ� num ����
���ڸ� ������ �� �ִ� ch ����
�Ǽ��� ������ �� �ִ� dnumber ����
num 10	ch �� a	dnumber���� 12.234 ������ ���
*/
void exam3()
{
	int num;
	char ch;
	double dnumber;
	num = 10;
		ch = 'a';
		dnumber = 12.234;

		printf("���� num => %d\n", num);
		printf("���� ch => %c\n", ch);
		printf("�Ǽ� dnumber => %f\n", dnumber);


}

void exam5()
{
	int num1 = 10;
	int num2;
	const int NUM3 = 30; //�ݵ�� ����� ���ÿ� �ʱ�ȭ

	num2 = 20;
	num1 = num1 + num2;

	printf("%d, %d, %d\n", num1, num2, NUM3);
}