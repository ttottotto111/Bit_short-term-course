#include <stdio.h>

/*
struct tagstu Ÿ��Ű���带 ���� �л� ����ü ����

�ɹ�1 : char name[20];      //�̸�
�ɹ�2 : int  grad;          //�г�
�ɹ�3 : char subject[20];   //�а�
�ɹ�4 : int  number;        //�й�
*/

struct tagstu
{
	char name[20];
	int grad;
	char subject[20];
	int number;
};

void input_stu(struct tagstu *stu1)
{
	strcpy_s((*stu1).name,sizeof((*stu1).name), "��¿�");
	(*stu1).grad = 1;
	strcpy_s((*stu1).subject, sizeof((*stu1).subject), "��ǻ�� ���� ����");
	(*stu1).number = 201610472;
}

void print_stu(struct tagstu stu1)
{
	printf("�̸� : %s\n�г� : %d\n���� : %s\n�й� : %d\n", stu1.name, stu1.grad, stu1.subject, stu1.number);
}

void update_stu(struct tagstu *stu1, int grad)
{
	(*stu1).grad = 3;
}

void print_stu1(char name[], int grad, char* subject, int number)
{
	printf("�̸� : %s\n", name);
	printf("�а� : %s\n", subject);
	printf("�г� : %d\n", grad);
	printf("�й� : %d\n", number);
}


int main()
{
	struct tagstu stu1;

	input_stu(&stu1);   //�л� ������ �Է�..(���ڿ��� ���ڿ� �Լ��� Ȱ��)

	print_stu(stu1);   //�л� ������ ���

	update_stu(&stu1, 3);  //�г��� �߰��� ����, ������ �г����� stu1�� ������ ����

	//����� ����� ���
	printf("\n");
	print_stu1(stu1.name, stu1.grad, stu1.subject, stu1.number);

	return 0;
}
