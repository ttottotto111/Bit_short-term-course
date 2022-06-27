#include <stdio.h>

//main �Լ������� ���� ���ǵ��� ���� 3���� �Լ��� ȣ���ϰ� �ִ�.
//������ ������ 3���� �Լ��� �����Ͻÿ�.(�ڵ�� ��� ��)

void fun_add(int n1, int n2);
void fun_div(int n1, int n2);
void fun_cal(int n1, int n2, char oper);

void main()
{
	int n1 = 10, n2 = 20;
	char ch = '+';

	fun_add(n1, n2);
	fun_div(n1, n2);
	fun_cal(n1, n2, ch);
	fun_cal(n1, n2, '+');
	fun_cal(n1, n2, '-');
	fun_cal(n1, n2, '*');
	fun_cal(n1, n2, '/');
}

void fun_add(int n1,int n2)
{
	int result = n1 + n2;

	printf("%d + %d = %d\n", n1, n2, result);
}
void fun_div(int n1,int n2)
{
	float result = (float)n1 / n2;

	printf("%d / %d = %.1f\n", n1, n2, result);
}
void fun_cal(int n1, int n2, char oper)
{
	float result=0;

	switch (oper)
	{
	case '+': result = (float)n1 + n2; break;
	case '-': result = (float)n1 - n2; break;
	case '*': result = (float)n1 * n2; break;
	case '/': result = (float)n1 / n2; break;
	default: printf("�߸��� �����Դϴ�.");
		return;
	}

	printf("%d %c %d = %.1f\n", n1, oper, n2, result);
}