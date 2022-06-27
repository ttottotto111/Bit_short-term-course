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
	printf("�̸� : ");	scanf_s("%s", pstu->name, sizeof(pstu->name));
	printf("�г�(1~4) : ");	scanf_s("%d", &pstu->grad);
	printf("���� : ");	scanf_s("%d", &pstu->kor);
	printf("���� : ");	scanf_s("%d", &pstu->eng);
	printf("���� : ");	scanf_s("%d", &pstu->mat);
}

void calaverage(student* pstu)
{
	pstu->average = (pstu->kor + pstu->eng + pstu->mat) / 3.0f;
}

void printstu(const student* pstu)
{
	printf("�̸� : %s\n", pstu->name);
	printf("�г� : %d\n", pstu->grad);
	printf("���� : %d\n", pstu->kor);
	printf("���� : %d\n", pstu->eng);
	printf("���� : %d\n", pstu->mat);
	printf("��� : %.1f\n", pstu->average);
}