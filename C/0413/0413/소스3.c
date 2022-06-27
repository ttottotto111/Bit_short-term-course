#include <stdio.h>

void cal(int n1, int n2, int n3, int size, int* sum, float* aver);

int main()
{
	int num1 = 10, num2 = 22, num3 = 31;
	int sum;
	float average;

	cal(num1, num2, num3, 3, &sum, &average);
	printf("Че : %d\n", sum);
	printf("ЦђБе : %.1f", average);

	return 0;
}

void cal(int n1, int n2, int n3, int size, int* sum, float* aver)
{
	*sum = n1 + n2 + n3;
	*aver = (float)*sum/size;
}