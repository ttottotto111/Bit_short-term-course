#include <stdio.h>

//main 함수에서는 아직 정의되지 않은 3개의 함수를 호출하고 있다.
//에러가 없도록 3개의 함수를 정의하시오.(코드는 없어도 됨)

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
	default: printf("잘못된 연산입니다.");
		return;
	}

	printf("%d %c %d = %.1f\n", n1, oper, n2, result);
}