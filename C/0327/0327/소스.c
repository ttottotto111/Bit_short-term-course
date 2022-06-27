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
	printf("이름 : 홍길동\n");
	printf("나이 : 23\n");
	printf("전화번호 : 010-0000-0000\n");
	printf("*-*-*-*-*-*-*-*-*-*-*-*-");
}

void exam2()
{
	//1.2
	printf("*****************************************\n");
	printf("*\t이름 : 홍길동\t\t\t*\n");
	printf("*\t나이 : 23\t\t\t*\n");
	printf("*\t전화번호 : 010-0000-0000\t*\n");
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
	printf("모음\t10진수\t16진수\n");
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
	printf("가족 수 : ");
	scanf_s("%d", &a);
	printf("당신의 가족은 모두 %d명 입니다.\n", a);
	printf("-----------------------------------\n");
	printf("연도 : ");
	scanf_s("%d", &b);
	printf("기록 : ");
	scanf_s("%f", &c);
	printf("당신의 최고 기록은 %d년의 %.1f초입니다.\n", b, c);
	printf("-----------------------------------\n");
	printf("학점입력(3개) : ");
	scanf_s(" %c %c %c", &d,sizeof(char), &e,sizeof(char), &f,sizeof(char));
	printf("C언어 : %c\n", d);
	printf("CPP언어 : %c\n", e);
	printf("자료구조 : %c\n", f);
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

	printf("문자 : ");
	scanf_s("%c", &b, sizeof(b));
	printf("값 : %d\n", b);
	printf("--------------------\n");
	printf("정수 : ");
	scanf_s("%d", &a);
	printf("문자 : %c", a);
}

void exam7()
{
//6
	int result1, result3;
	float  a, b, result2,result4;
	printf("정수1 : ");
	scanf_s("%f", &a);
	printf("정수2 : ");
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
	printf("3개의 정수 입력 : ");
	scanf_s(" %f %f %f", &a, &b, &c);
	result1 = a + b + c;
	result2 = (a + b + c) / 3;
	printf("합 : %d\n", result1);
	printf("평균 : %.1f", result2);
}

void exam9()
{
	//9
	int a;
	printf("점수 입력 : ");
	scanf_s("%d", &a);
	printf("결과 : %d", a>=60);
}

void exam10()
{
	//10
	int a;
	printf("정수 입력 : ");
	scanf_s("%d", &a);
	printf("결과 : %d", a%2 !=1);
}