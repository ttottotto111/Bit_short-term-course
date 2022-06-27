#include <stdio.h>

typedef struct tagstudent
{
	char name[20];
	int grad;
	int kor;
	int eng;
	int mat;
	float average;
} student;

void inputstudent(student* pstu);
void calaverage(student* pstu);
void printstu(const student* pstu);

int main()
{
	student stu1;

	inputstudent(&stu1);
	calaverage(&stu1);
	printstu(&stu1);

	return 0;
}

void inputstudent(student* pstu)
{
	printf("이름 : ");	scanf_s("%s", pstu->name, sizeof(pstu->name));
	printf("학년(1~4) : ");	scanf_s("%d", &pstu->grad);
	printf("국어 : ");	scanf_s("%d", &pstu->kor);
	printf("영어 : ");	scanf_s("%d", &pstu->eng);
	printf("수학 : ");	scanf_s("%d", &pstu->mat);
}

void calaverage(student* pstu)
{
	pstu->average = (pstu->kor + pstu->eng + pstu->mat) / 3.0f;
}

void printstu(const student* pstu)
{
	printf("이름 : %s\n", pstu->name);
	printf("학년 : %d\n", pstu->grad);
	printf("국어 : %d\n", pstu->kor);
	printf("영어 : %d\n", pstu->eng);
	printf("수학 : %d\n", pstu->mat);
	printf("평균 : %.1f\n", pstu->average);
}