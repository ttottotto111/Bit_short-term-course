#include <stdio.h>

int getsum(int n1, int n2, int n3);
float getaverage(int n1, int n2, int n3,int n4);
int isbigchar(char a);

void main()
{
	int sum;
	sum = getsum(10, 20, 30);
	printf("%d\n", sum);

	float average;
	average = getaverage(21, 22, 35, 3);
	printf("%.1f\n", average);

	if (isbigchar('c') == 1)
		printf("대문자\n");
	else
		printf("소문자\n");
}

int getsum(int n1, int n2, int n3)
{
	int result;
	result = n1 + n2 + n3;
	return result;
}

float getaverage(int n1, int n2, int n3, int n4)
{
	int sum;
	float average;
	sum = n1 + n2 + n3;
	average = (float)sum / n4;
	return average;
}

int isbigchar(char ch)
{
	int n1;
	if ('a' <= ch <= 'z')
		n1 = 0;

	else if ('A' <= ch <= 'Z')
		n1 = 1;
	return n1;
}