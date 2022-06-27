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
	//2.1번
	int num;
	int* pnum;
	
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	pnum = &num;
	printf("num의 값 : %d\nnum의 주소값 : %d", num, pnum);
	printf("\npnum의 값 : %d", pnum);
	printf("\npnum의 주소값 : %d", &pnum);
	printf("\npnum의 역참조값 : %d\n", *pnum);
	*pnum = 50;
	printf("num의 값 : %d", num);
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
