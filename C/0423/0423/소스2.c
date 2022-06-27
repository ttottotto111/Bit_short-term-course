#include <stdio.h>
#include <malloc.h>


void exam1();
void exam3();

int main()
{
	exam1();
	exam3();
	return 0;
}

void exam1()
{
	int* p1 = malloc(sizeof(int));
	char* p2 = malloc(sizeof(char));
	float* p3 = malloc(sizeof(float));

	//=======================================

	*p1 = 10;
	*p2 = 'a';
	*p3 = 10.1f;

	printf("%d, %c, %.1f", *p1, *p2, *p3);
	//========================================

	free(p1);
	free(p2);
	free(p3);
}

int* g_arr[5];

void insert()
{
	int num = 10;
	g_arr[0] = &num;
}

void insert1()
{
	int num1 = 20;
	g_arr[1] = &num1;
}

void exam2()
{
	insert();
	insert1();
}

int* g_arr1[5];

void insert11()
{
	int* pnum = (int*)malloc(sizeof(int));
	*pnum = 10;
	g_arr1[0] = pnum;
}

void insert12()
{
	int* pnum = (int*)malloc(sizeof(int));
	*pnum = 20;
	g_arr1[1] = pnum;
}


void exam3()
{
	insert11();
	insert12();

	printf("\n%d\n", *g_arr1[0]);
	printf("%d\n", *g_arr1[1]);
}

void exam4()
{
	int arr1[10];

	int size;
	printf("정수 몇 개 저장 : ");
	scanf_s("%d", &size);

	int* arr = (int*)malloc(sizeof(int) * size);

	//초기화
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}

	//출력
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");



	free(arr);
}