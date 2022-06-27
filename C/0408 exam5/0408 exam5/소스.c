#include <stdio.h>

void initarr();
void printarr();
void insertarr();
void deletearr();

int arr[10];
int i;

void main()
{
	int idx;
	while (1)
	{
		printf("[1]�Է� [2]��ü��� [3]���� [4]����\n");

		scanf_s("%d", &idx);
		switch (idx)
		{
		case 1: insertarr(); break;
		case 2: printarr(); break;
		case 3: deletearr(); break;
		case 4: return;
		}
	}
}

void initarr()
{
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}

void printarr()
{
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void insertarr()
{
	int a=0,ins=0;
	printf("�ε��� �Է� : ");
	scanf_s("%d", &ins);
	printf("���尪 �Է� : ");
	scanf_s("%d", &a);
	arr[ins] = a;
	printarr();
}

void deletearr()
{
	int dex=0;
	printf("�ε��� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &dex);
	arr[dex] = 0;
	printarr();
}