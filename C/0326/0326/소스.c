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
	printf("아스키 코드값 : %d, %c", ch1, ch1);
}

void exam3()
{
	//증감 연산자
	int a = 1;
	int b;

	b = ++a;

	printf("%d,%d\n", a,b); 

	//후치 : 구문이 끝난 후 연산
	int a1 = 1;
	int b1;

	b1 = a1++; // b1=1

	printf("%d,%d\n",a1,b1);

}

void exam4()
{
	int a = 1;
	int b;

	//하나의 구문안에서 변수의 값은 동일하다.
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

	int number = 93; //90보다 크거나 같고 100보다 작거나 같나?
	int result = 90 <= number && number <= 100;
		printf("%d\n", result);
}


void exam7() 
{
	//문제1: 정수값 2개 입력받고 두수의 곱의 결과를 출력하시오
	int a, b, result;

	printf("정수1 입력 : ");
	scanf_s("%d", &a);
	printf("정수2 입력 : ");
	scanf_s("%d", &b);

	result = a * b;
	printf("%d *%d = %d\n",a,b, result);
}

void exam8()
{
	//문제2. 문자를 2개 입력받고 첫번째 문자가 크면1, 작으면0 출력
	char ch1, ch2;
	int result;

	printf("문자1 입력 : ");
	scanf_s("%c", &ch1, sizeof(ch1));
	getchar();
	printf("문자2 입력 : ");
	scanf_s("%c", &ch2, sizeof(ch2));

	result = ch1 > ch2;
	printf("%d", result);
}

void exam9()
{
//입력받은 정수 n을 5로나눈 몫과 나머지
	int a, result, result2;
	printf("정수 입력 : ");
	scanf_s("%d", &a);
	result = a / 5;
	result2 = a % 5;
	printf("정수 : %d\n", a);
	printf("몫 : %d\n", result);
	printf("나머지 %d\n: ", result2);
}

void exam10()
{
//반지름을 입력받고 원의 둘레 구하는 프로그램
	int a;
	float result;
	printf("반지름 입력 : ");
	scanf_s("%d", &a);
	result = 2 * 3.1416 * a;
	printf("반지름 : %d\n", a);
	printf("둘레 : %.2f", result);
}

void exam11()
{
//섭씨온도를 입력받아 화씨로 표현
	float a, result;
	printf("섭씨온도 입력 : ");
	scanf_s("%f", &a);
	result = a * (9 / 5) + 32;
	printf("섭씨 : %.0f\n", a);
	printf("화씨 : %.1f", result);
}

void exam12()
{
//소문자를 입력받아 대문자로 변환
	char a;
	int result;
	printf("소문자 입력 : ");
	scanf_s("%c", &a);
	result = a - 32;
	printf("입력(소문자) : %c\n", a);
	printf("변환(대문자) : %c", result);
}

void exam13()
{
//정수3개 입력받고 그 합과 평균
	int a, b, c;
	float result1, result2;
	printf("정수1 입력 : ");
	scanf_s("%d", &a);
	printf("정수2 입력 : ");
	scanf_s("%d", &b);
	printf("정수3 입력 : ");
	scanf_s("%d", &c);
	result1 = a + b + c;
	result2 = result1 / 3;
	printf("정수1 : %d\n", a);
	printf("정수2 : %d\n", b);
	printf("정수3 : %d\n", c);
	printf("--------------------\n");
	printf("합계 : %.0f\n", result1);
	printf("평균 : %.0f", result2);
}