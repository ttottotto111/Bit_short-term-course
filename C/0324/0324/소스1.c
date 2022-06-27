//0325

#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

void main()
{
	exam6();
}

//사용자로부터 나이를 입력받는 프로그램
void exam1()
{
	int age;
	age = 20;
	printf("나이를 입력하세요 : ");
	scanf_s("%d",&age);

	printf("나이 : %d\n", age);
}

void exam2()
{
	double wei1;
	double wei2;

	printf("몸무게 입력1 : ");
	scanf_s("%lf", &wei1);
	printf("몸무게 입력2 : ");
	scanf_s("%lf", &wei2);

	printf("첫번째 몸무게 : %lf \n",wei1);
	printf("두번째 몸무게 : %lf \n", wei2);
}

void exam3()
{
	char ch1;
	char ch2;
	printf("문자입력1 : ");
	scanf_s("%c", &ch1, sizeof(ch1)); 

	//문자 하나를 강제로 버퍼에서 제거
	getchar(); //입력버퍼에서 문자하나를 빼오는 함수

	printf("문자입력2 : ");
	scanf_s("%c", &ch2, sizeof(char));

	//문자 하나를 강제로 버퍼에서 제거

	printf("결과 : %c, %c", ch1, ch2);
}

void exam4()
{
	char ch1, ch2, ch3, ch4;

	printf("문자1 : ");
	ch1 = getchar();
	getchar();

	printf("문자2 : ");
	ch2 = getchar();
	getchar();

	printf("문자3 : ");
	ch3 = getchar();
	getchar();

	printf("문자4 : ");
	ch4 = getchar();
	getchar();

	printf("%c, %c, %c, %c \n", ch1, ch2, ch3, ch4);

	putchar(ch1); //문자 하나만 출력
	putchar('\n');
	putchar(ch2); 
	putchar('\n');
}

void exam5()
{
	char str1[20]; //배열
	char str2[20];

	printf("문자열1 : ");
	gets_s(str1, sizeof(str1));

	printf("문자열2 : ");
	gets_s(str2, sizeof(str2));

	puts("결과값");
	puts(str1);
	puts(str2);
}

void exam6()
{
//1. 원하는 타입의 변수를 선언...
	char name[20];
	char sub[20];
	int age;
	char gender;
	float weight;

	//2. 입력을 통한 초기화
	printf("이름 : ");
	gets_s(name, sizeof(name));

	printf("학과 : ");
	scanf_s("%s", sub, sizeof(sub));

	printf("나이 : ");
	scanf_s("%d", &age);
	getchar();

	printf("성별(m or f) : ");
	scanf_s("%c", &gender, sizeof(gender));
	getchar();

	printf("몸무게 : ");
	scanf_s("%f", &weight);

	//3. 결과출력
	printf("이름 : %s\n", name);
	printf("학과 : %s\n", sub);
	printf("나이 : %d\n", age);
	printf("성별 : %c\n", gender);
	printf("몸무게 : %f.1\n", weight); //소수점 한자리까지

}