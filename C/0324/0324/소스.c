#include <stdio.h> //헤더파일 : 코드를 작성할때 필요한 
				   //함수의 선언부를 가지고 있는 파일

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
	// 1. 생성
	int num;	//저장소 생성 - 정수를 저장할 수 있는 저장공간
	int num1;
	// 2. 저장
	// 2-1 대입연산 (= : 대입 연산자)
	//	L value = R value
	// L value : 저장소, R value : 저장값
	num = 10;
	num1 = 20;
	// 3. cnffur
	printf("정수 출력 : %d, %d \n", num, num1);
}

//정수를 저장할 수있는 number생성, number에 1저장
void exam2()
{
	int number;
	number = 1;
	printf("number =>%d\n", number);
	number = 11;
	printf("number =>%d\n", number);
}

/*
C프로그램에서 제공되는 타입
- 정수 : int
- 실수 : char
- 문자 : double

정수를 저장할 수 있는 num 생성
문자를 저장할 수 있는 ch 생성
실수를 저장할 수 있는 dnumber 생성
num 10	ch 는 a	dnumber에는 12.234 저장후 출력
*/
void exam3()
{
	int num;
	char ch;
	double dnumber;
	num = 10;
		ch = 'a';
		dnumber = 12.234;

		printf("정수 num => %d\n", num);
		printf("문자 ch => %c\n", ch);
		printf("실수 dnumber => %f\n", dnumber);


}

void exam5()
{
	int num1 = 10;
	int num2;
	const int NUM3 = 30; //반드시 선언과 동시에 초기화

	num2 = 20;
	num1 = num1 + num2;

	printf("%d, %d, %d\n", num1, num2, NUM3);
}