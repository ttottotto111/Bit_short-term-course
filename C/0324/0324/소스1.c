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

//����ڷκ��� ���̸� �Է¹޴� ���α׷�
void exam1()
{
	int age;
	age = 20;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d",&age);

	printf("���� : %d\n", age);
}

void exam2()
{
	double wei1;
	double wei2;

	printf("������ �Է�1 : ");
	scanf_s("%lf", &wei1);
	printf("������ �Է�2 : ");
	scanf_s("%lf", &wei2);

	printf("ù��° ������ : %lf \n",wei1);
	printf("�ι�° ������ : %lf \n", wei2);
}

void exam3()
{
	char ch1;
	char ch2;
	printf("�����Է�1 : ");
	scanf_s("%c", &ch1, sizeof(ch1)); 

	//���� �ϳ��� ������ ���ۿ��� ����
	getchar(); //�Է¹��ۿ��� �����ϳ��� ������ �Լ�

	printf("�����Է�2 : ");
	scanf_s("%c", &ch2, sizeof(char));

	//���� �ϳ��� ������ ���ۿ��� ����

	printf("��� : %c, %c", ch1, ch2);
}

void exam4()
{
	char ch1, ch2, ch3, ch4;

	printf("����1 : ");
	ch1 = getchar();
	getchar();

	printf("����2 : ");
	ch2 = getchar();
	getchar();

	printf("����3 : ");
	ch3 = getchar();
	getchar();

	printf("����4 : ");
	ch4 = getchar();
	getchar();

	printf("%c, %c, %c, %c \n", ch1, ch2, ch3, ch4);

	putchar(ch1); //���� �ϳ��� ���
	putchar('\n');
	putchar(ch2); 
	putchar('\n');
}

void exam5()
{
	char str1[20]; //�迭
	char str2[20];

	printf("���ڿ�1 : ");
	gets_s(str1, sizeof(str1));

	printf("���ڿ�2 : ");
	gets_s(str2, sizeof(str2));

	puts("�����");
	puts(str1);
	puts(str2);
}

void exam6()
{
//1. ���ϴ� Ÿ���� ������ ����...
	char name[20];
	char sub[20];
	int age;
	char gender;
	float weight;

	//2. �Է��� ���� �ʱ�ȭ
	printf("�̸� : ");
	gets_s(name, sizeof(name));

	printf("�а� : ");
	scanf_s("%s", sub, sizeof(sub));

	printf("���� : ");
	scanf_s("%d", &age);
	getchar();

	printf("����(m or f) : ");
	scanf_s("%c", &gender, sizeof(gender));
	getchar();

	printf("������ : ");
	scanf_s("%f", &weight);

	//3. ������
	printf("�̸� : %s\n", name);
	printf("�а� : %s\n", sub);
	printf("���� : %d\n", age);
	printf("���� : %c\n", gender);
	printf("������ : %f.1\n", weight); //�Ҽ��� ���ڸ�����

}