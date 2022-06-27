#include <stdio.h>

int inputnumber();
char inputoper();
float getresult(int n1, int n2, char op);

int main()
{
	int num1, num2;
	char oper;
	float result;

	num1 = inputnumber();
	num2 = inputnumber();
	oper = inputoper();
	result = getresult(num1, num2, oper);

	printf("%d %c %d = %.1f", num1, oper, num2, result);
	return 0;
}

int inputnumber()
{
	int n1;
	printf("���� �Է� : ");
	scanf_s("%d", &n1);
	getchar();
	return n1;
}

char inputoper()
{
	char oper;
	printf("������ �Է� : ");
	scanf_s("%c", &oper);
	getchar();
	return oper;
}

float getresult(int num1, int num2, char oper)
{
	float result;

	switch (oper)
	{
	case '+': result = (float)num1 + num2; break;
	case '-': result = (float)num1 - num2; break;
	case '*': result = (float)num1 * num2; break;
	case '/': result = (float)num1 / num2; break;
	default: return -1.0f;
	}
	return result;
}