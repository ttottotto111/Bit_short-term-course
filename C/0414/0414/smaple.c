//���� ���� : �Լ� �ۿ� ����� ����
#include "sample.h"
#include <stdio.h>

int g_arr[DATAMAX];

void sample_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_arr[i] = -1;
	}
}

void sample_printall()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		printf("%3d", i);
	}
	printf("\n");
	printf("---------------------------------\n");
	for (int i = 0; i < DATAMAX; i++)
	{
		printf("%3d", g_arr[i]);
	}
	printf("\n");
}

void sample_insert()
{
	int idx, data;

	printf("������ġ(0~%d) >> ", DATAMAX - 1);
	scanf_s("%d", &idx);
	if (idx < 0 || idx >= DATAMAX)
	{
		printf("�߸��� �ε����� �Է��ϼ̽��ϴ�.\n");
		return;
	}
	else
	{
		if (g_arr[idx] != -1)
		{
			printf("�����Ͱ� �����մϴ�.\n");
			return;
		}
	}
	printf("���尪 : ");
	scanf_s("%d", &data);

	g_arr[idx] = data;

	printf("����Ǿ����ϴ�.\n");
}

//����ڷκ��� �˻��ϰ��� �ϴ� ���ڸ� �Է�
//�迭�� ��ȸ�ϸ鼭 �迭�� ������ �ִ� ���� �Է��� ���ڰ��� ��
//���Ͻ� ã�ٴ� ���ڿ� ���
void sample_select()
{
	int a;
	printf("���� �Է� : ");
	scanf_s("%d", &a);

	for (int i = 0; i < DATAMAX; i++)
	{
		if (g_arr[i] == a)
		{
			printf("%d��° �ε��� -> %d\n", i, g_arr[i]);
			return;
		}
	}
	printf("���ڰ� �����ϴ�\n");
}

//����ڿ��� ������ �޴´�
//���� ã�� �迭�� �ε��� ��ġ�� ����
//��ã���� ���ڰ� �����ϴ� ���
void sample_update()
{
	int a;
	printf("���� �Է� : ");
	scanf_s("%d", &a);

	for (int i = 0; i < DATAMAX; i++)
	{
		if (g_arr[i] == a);
		{
			int b;
			printf("������ ���ڸ� �Է� : ");
			scanf_s("%d", &b);
			g_arr[i] = b;
			return;
		}
	}
	printf("���ڰ� �����ϴ�\n");
}

//�˻��ϰ��� �ϴ� ���ڸ� �Է¹޴´�.
//�迭�� ��ȸ�ϸ鼭 �迭�� ������ �ִ� ���� �Է��� ���ڰ��� ���Ѵ�.
//����, �����ϸ� �Ʒ��� ���� ����Ѵ�.
//      �ش� �迭�� �ε����� ����� ���� -1�� �����Ѵ�.
//      ��ã������ "���ڰ� �����ϴ�." ���
void sample_delete()
{
	int a;
	printf("������ �ε��� �Է� : ");
	scanf_s("%d", &a);

	for (int i = 0; i < DATAMAX; i++)
	{
		if (g_arr[i] == a);
		{
			g_arr[i] = -1;
			return;
		}
	}
	printf("���ڰ� �����ϴ�\n");
}
