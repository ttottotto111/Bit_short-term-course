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
	// 1-1번
	int n;
	n = 2;
	if (n >= 0)
		printf("조건에 만족.\n");
	else
		printf("조건에 위배됨\n");
}

void exam2()
{
	//1.2번
	int n;
	n = 15;
	if (n % 3 == 0 && n % 5 == 0)
		printf("조건에 만족");
	else
		printf("조건에 위배됨");
}

void exam3()
{
	//1.3번
	char ch;
	ch = 'A';
	if (ch >= 'A' && ch <= 'Z')
		printf("대문자 입니다.");
	else
		printf("소문자 입니다.");
}

void exam4()
{
	//1.4번
	float n;
	n = 6;
	if (n < -5 || n>5)
		printf("조건에 만족\n");
	else
		printf("조건에 위배됨\n");
}

void exam5()
{
	//1.5번
	int n;
	n = 6;
	if (n % 2 != 1)
		printf("홀수가 아닙니다");
	else
		printf("홀수입니다");
}

void exam6()
{
	//2번
	int n;
	printf("점수 : ");
	scanf_s("%d", &n);

	if (n >= 60)
		printf("결과 : 합격");
	else
		printf("결과 : 불합격");
}

void exam7()
{
//3번
	int a, b, c;
	printf("정수(3개) : ");
	scanf_s(" %d %d %d", &a, &b, &c);
	
	if (a + b + c <= 180)
		printf("결과 : 가능");
	else
		printf("결과 : 불가능");
}

void exam8()
{
	//4번
	int N;
	printf("정수 : ");
	scanf_s("%d", &N);

	if (N % 2 != 0)
		printf("결과 : 홀수");
	else
		printf("결과 : 짝수");
}

void exam9()
{
	//5번
	int a, b, c, d, e;
	int sum1, sum2;
	sum1 = sum2 = 0;
	printf("정수(5개) : ");
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
	printf("양수의 합 : %d\n", sum1);
	printf("음수의 합 : %d\n", sum2);
}

void exam10() {
	float a, b;
	char ch;
	printf("종류,온도 : ");
	scanf_s("%c", &ch);
	scanf_s("%f", &a);
	printf("변환 : ");
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
	printf("문자 : ");
	scanf_s("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
		printf("변환 : %c", ch + 32);
	else
		printf("변환 : %c", ch - 32);
}

void exam12()
{
	int a;
	printf("점수 : ");
	scanf_s("%d", &a);
	if (a >= 90)
		printf("학점 : A");
	else if (a >= 80)
		printf("학점 : B");
	else if (a >= 70)
		printf("학점 : C");
	else if (a >= 60)
		printf("학점 : D");
	else
		printf("학점 : F");
}