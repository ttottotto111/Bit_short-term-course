#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();

void main()
{
	exam5();
}

void exam1()
{
	int j;

	j = 91;

	if (j > 90) 
		printf("ũ��\n");
}

void exam2()
{
	char gender;
	gender = 'm';

	if (gender == 'm')
	printf("����\n");
	else
	printf("����\n");
}

void exam3()
{
	int j;
	char ch;
	j = 82;
 
	if (j >= 90 && j <= 100)
		ch = 'A';

	else if (j >= 80 && j < 90)
		ch = 'B';

	else if (j >= 70 && j < 79)
		ch = 'C';

	else
		ch = 'F';
	printf("%d������ ������ %c �Դϴ�.", j, ch);
}

void exam4()
{
	char ch;

	printf("������ �Է� : ");
	scanf_s("%c", &ch, sizeof(ch));
	getchar();

	if (ch >= 'A' && ch <= 'Z') {
		printf("�빮�� �Դϴ�.\n");
		ch = ch + ('a' - 'A'); //ch = ch + 32
	}
	else if (ch >= 'a' && ch <= 'z');
	{
		printf("�ҹ��� �Դϴ�.\n");
			ch = ch - ('a' - 'A'); // ch= ch - 32
	}
	printf("������ ����� %c\n", ch);
}

void exam5()
{
	char ch = 'B';

	switch (ch)
	{
	case 'A':
		printf("1\n");
		printf("2\n");
		printf("3\n");
		break;
	case 'B':
		printf("4\n");
		printf("5\n");
		break;
	case 'C':
		printf("6\n");
		break;
	}
}