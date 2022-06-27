#include <stdio.h>

void exam1(int n1, int* n2);

int main()
{
	int num1 = 10;
	printf("%d\n", num1);
	
	exam1(num1, &num1);

	printf("%d\n", num1);
	return 0;
}

void exam1(int n1, int* n2)
{
	*n2 = 30;
}