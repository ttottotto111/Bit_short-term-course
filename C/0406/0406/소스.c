#include <stdio.h>
#include <stdlib.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam9();
void exam10();


void main()
{
	exam1();
}

// 1��
void exam1()
{
	int p1[5];
	int p2[3][5];
	int p4[20];
	int p5[2][20];

	printf("%d\n", sizeof(p1));
	printf("%d\n", sizeof(p2));
	printf("%d\n", sizeof(p4));
	printf("%d\n", sizeof(p5));
}

//2��
void exam2()
{
	char arr1[10] = { 'a','b','c','d','e','f','g','h','l','j' };
	char arr2[5] = { 'A','B','C','D','E' };

	printf("%c\n", arr1[4]);
	printf("%c\n", arr2[2]);

	if (arr1[1] == arr2[2])
		printf("�����մϴ�.");
	else
		printf("�������� �ʽ��ϴ�.");
}

//3��
void exam3()
{
	int i;
	int count = 1;
	char count2 = 'a';
	int arr1[10];
	int arr2[10];
	char arr3[26];
	for (i = 0; i < 10; i++)
	{
		arr1[i] = 0;
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		arr2[i] = count;
		count++;
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 26; i++)
	{
		arr3[i] = count2;
		count2++;
		printf("%c ", arr3[i]);
	}
}

//4��
void exam4()
{
	srand(time(NULL));
	int i;
	int arr[12];
	for (i = 0; i < 12; i++)
	{
		arr[i] = rand() % 20;
		printf("%2d ", arr[i]);
	}
}

//5��
void exam5()
{
	srand(time(NULL));
	int i;
	int arr[12];
	int result[12];
	for (i = 0; i < 12; i++)
	{
		arr[i] = rand() % 20;
		printf("%2d ", arr[i]);
		result[i] = arr[i] * 2;
	}
	printf("\n");
	for(i=0; i<12; i++)
	{
		printf("%2d ", result[i]);
	}
}

//6��
void exam6()
{
	srand(time(NULL));
	int i;
	int j=0;
	int arr[12];
	for (i = 0; i < 12; i++)
	{
		arr[i] = rand() % 20;
		printf("%2d ", arr[i]);
		if (j < arr[i])
			j = arr[i];
	}


	printf("\n");
	printf("�ִ밪 : %d", j);
}

//7��
void exam7()
{
	srand(time(NULL));
	int i;
	int j=20;
	int arr[12];
	for (i = 0; i < 12; i++)
	{
		arr[i] = rand() % 20;
		printf("%2d ", arr[i]);
		if (j > arr[i])
			j = arr[i];
	}
	printf("\n");
	printf("�ּڰ� : %d", j);
}

//8��
void exam8()
{
	int a[5];
	int i, result=0;
	float grade;

	for (i = 0; i < 5; i++)
	{
		printf("%d��° : ", i+1);
		scanf_s("%d", &a[i]);
		result = result + a[i];
	}
	grade = (float)result / 5;
	printf("\n�հ� : %d", result);
	printf("\n��� : %.2f", grade);
}

//9��
void exam9()
{
	char arr[50];
	int i=0, a=0, b=0, c=0, d=0;
	printf("���ڿ� : ");
	gets_s(arr, sizeof(arr));

	for (i=0; i<arr[i]; i++)
	{
		if ((arr[i] >= 'A') && (arr[i] <= 'Z'))
			a = a + 1;
		else if ((arr[i]>='a') &&(arr[i] <= 'z'))
			b = b + 1;
		else if ((arr[i] >= '0')&&( arr[i]<= '9'))
			c = c + 1;
		else if (arr[i] == 32)
			d = d + 1;
	}
	printf("�빮�� : %d\n", a);
	printf("�ҹ��� : %d\n", b);
	printf("��  �� : %d\n", c);
	printf("��  �� : %d\n", d);
}

//10��
void exam10()
{
	int arr[10] = { 1,2,3,4,5,6,7 }; //1,2,3,4,5,6,7,0,0,0
	int *parr = arr+1;

	arr[7] = arr[0] + arr[1];
	arr[8] = *&parr[1] + *&parr[2];

	for (int i = 0; i < 10; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n");
}