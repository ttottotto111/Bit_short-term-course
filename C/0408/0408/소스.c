#include <stdio.h>

int arr[10];

void exam1();
void exam2();

void main()
{
	exam1();
}

void exam1()
{
	//2.1��
	int num;
	int* pnum;
	
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	pnum = &num;
	printf("num�� �� : %d\nnum�� �ּҰ� : %d", num, pnum);
	printf("\npnum�� �� : %d", pnum);
	printf("\npnum�� �ּҰ� : %d", &pnum);
	printf("\npnum�� �������� : %d\n", *pnum);
	*pnum = 50;
	printf("num�� �� : %d", num);
}

void exam2()
{
	int i = 0;
	char arr[5] = { 'a','b','c','d','e' };
	char* pch1;
	char* pch2;
	pch1 = arr;
	pch2 = &arr[3];
	printf("%c\n%c\n", arr[1], *pch1 + 1);
	printf("%c\n%c\n", arr[0], *pch2 - 3);
	pch1 = pch1 + 3;
	arr[3] = *pch1 - 32;
	arr[4] = *(pch2 + 1) - 32;
	for (i = 0; i < 5; i++)
	{
		printf("%c ", arr[i]);
	}
}
