#include <stdio.h>

void printchar(char ch, int n);

void main()
{
	printchar('^',20);
	printchar('.',100);
}

void printchar(char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}

/*
foo�Լ��� �� 3���� ������ ����
���� 2���� ������ �Ű�����
���� 1���� ������ ��������
�� ��� ������ foo�� stack�޸𸮿� ����
���� foo�� ȣ���Ϸ��� �ݵ�� int type 2���� �����ؾ� �Ѵ�.
*/
void foo(int n1, int n2)
{
	int n3;
}