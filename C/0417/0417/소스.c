#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void mystrcpy(char* s1, char* s2);


#define EXAM1 void exam1();
#define MSG1 "문자열정의"

EXAM1 // ==> void exam1();
int main() 
{

	exam8();
	return 0;
}
void exam1() 
{
	printf("%s, 0x%p\n", "문자열정의",&"문자열정의");
	printf("%s\n", MSG1);
}

void exam2()
{
	char arr[10] = { "abcdefg" };

	//%s 주소로부터 '\0'이 나올때까지 출력하는 문자열 출력서식
	printf("%s\n", arr);		//abcdef
	printf("%c\n", arr[3]);		//d
	printf("%s\n", arr+2);		//cdefg
	printf("%c\n", *(arr+2));	//c
}

void exam3()
{
	char arr[10] = { "abc\0def\0" };
	printf("%s\n", arr);
	printf("%s\n", arr+4);
}

void exam4()
{
	//문자열 4개가 저장되어 있는 2차원 배열
	char arr[4][5] = { "abcd",
	"efhg",
	"ijkl",
	"mnop" };

	//0차원 관점 : 문자
	printf("%c\n", arr[0][2]);	//c
	printf("%c\n", arr[2][1]);	//j

	//1차원 관점 : 문자열
	printf("%s\n", arr[0]);	//abcd
	printf("%s\n", arr[2]);	//ijkl
}

void exam5()
{
	int i=0;
	char arr1[10] = { "abc" };
	char arr2[10] = { "ABCDEFG" };

	//arr1 --> arr2 
	for (int i = 0; arr1[i] != '\0'; i++)
	{
		arr2[i] = arr1[i];
	}
	arr2[i] = '\0';

	printf("%s\n", arr2);
}

void mystrcpy(char* s1, char* s2)
{
	int i;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';

	printf("%s\n", s2);
}

void exam6()
{
	char arr1[10] = { "한글" };
	char arr2[10] = { "ABCDEFG" };

	mystrcpy(arr2, arr1);

	printf("%s\n", arr2);
}

void exam7()
{
	int num1 = 10;
	int num2 = 20;

	const int* pn;
	pn = &num1;	printf("%d\n", *pn);
	pn = &num2;	printf("%d\n", *pn);

	//*pn = 11;		//error
}

void setnum1(int* n)
{
	*n = 10;
}

void printnum1(int n)
{
	printf("%d\n", n);
}

void setarr(int arr[5], int idx, char ch)
{
	arr[idx] = ch;
}

void printarr(char* arr)
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%c\t", arr[i]);
		}
		printf("\n");
	}

void exam8()
{
	int num1;

	setnum1(&num1);
	printnum1(num1);

	//=====================
	int arr[5] = { 'a','b','c','d','e' };

	setarr(arr,2,'C');	//주소값 전달
	printarr(arr);		//절대 값전달 불가능
}