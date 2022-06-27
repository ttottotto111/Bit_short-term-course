# include <stdio.h>



void main()
{
	int num = 10;
	int arr[5] = { 1,2,3,4,5 };

	fun1(num, &num);
	fun2(arr[2], arr[4]);
	fun3(&arr[1], &arr[3]);
	fun4(arr, arr + 3);
}

void fun1(int n, int* n1)
{

}

void fun2(int n1, int n2)
{

}

void fun3(int* n1, int* n2)
{

}

void fun4(int* n1, int* n2)
{

}