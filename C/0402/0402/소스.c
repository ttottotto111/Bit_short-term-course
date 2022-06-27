#include <stdio.h>
#include <stdlib.h> //rand

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

void main()
{
	exam6();
}

void exam1()
{
	int num;
	int arr[3]; //배열변수
	
	//변수 초기화
	num = 10;
	arr[0] = 20;
	arr[1] = 30;
	arr[2] = 40;

	//변수 초기화 scanf_s
	printf(">> 정수 입력 : ");
	scanf_s("%d", &num);
	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[0]);
	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[1]);
	printf(">> 정수 입력 : ");
	scanf_s("%d", &arr[2]);

	//변수 출력
	printf("정수 출력 : %d\n", num);
	printf("정수 출력 : %d\n" ,arr[0]);
	printf("정수 출력 : %d\n" ,arr[1]);
	printf("정수 출력 : %d\n", arr[2]);

}

//3개의 정수를 저장할수 있는 num 배열 생성 사용자 입력을통해 3개 입력받고 
//저장된 정수의 합 result에 저장 후 출력
void exam2()
{
	int num[3];
	int result;
	printf("정수 입력 : ");
	scanf_s("%d", &num[0]);
	printf("정수 입력 : ");
	scanf_s("%d", &num[1]);
	printf("정수 입력 : ");
	scanf_s("%d", &num[2]);
	result = num[0] + num[1] + num[2];
	printf("정수의 합 : %d\n", result);
}

/*
4개의 정수를 입력받는 arr배열생성 4개입력받고 합을 result에 저장
평균은  average에 저장 결과 출력
*/
void exam3()
{
	int arr[4], result;
	float average;
	printf("정수 입력 : ");
	scanf_s("%d", &arr[0]);
	printf("정수 입력 : ");
	scanf_s("%d", &arr[1]);
	printf("정수 입력 : ");
	scanf_s("%d", &arr[2]);
	printf("정수 입력 : ");
	scanf_s("%d", &arr[3]);

	result = arr[0] + arr[1] + arr[2] + arr[3];
	average = result / 4.0f; //4.0만 붙이면 double 4.0f까지 붙이면 float
							 //(float)result /4;도 가능
	printf("정수의 합 : %d\n", result);
	printf("정수의 평균 : %.1f\n", average);
}

#define MAXDATA 100
void exam4()
{
	int arr[MAXDATA];
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < MAXDATA; i++)
	{
		arr[i] = rand()%100;
	}

	//전체 출력
	for (int i = 0; i < MAXDATA; i++)
	{
		if (i % 20 == 0 && i!=0)
			printf("\n");

		printf("%3d", arr[i]);
	}
	printf("\n");

}

//난수
void exam5()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++) 
	{
		//rand()%100 -0~99 사이값
		int r = (rand() % 99)+1; //1~99
		printf("%d\n", r);
	}
}

/*
정수를 1000개 저장할 수 있는 arrnum 배열을 선언
1~99 사이의 난수값을 발생시켜 초기화
배열에 저장된 모든 요소의 합과 평균을 출력
사용자로부터 1~99 사이 값입력받아 몇개 저장되어있는지 확인
*/
#define MAXDATA1 100
void exam6()
{
	// 변수 선언
	int arrnum[MAXDATA1],sum=0;
	double average=0;
	srand((unsigned)time(NULL));

	//초기화
	for (int i = 0; i < MAXDATA1; i++)
	{
		arrnum[i] = (rand() % 99) + 1;
	}

	//연산
	for (int i = 0; i < MAXDATA1; i++)
	{
		if (i % 20 == 0 && i != 0)
			printf("\n");
		printf("%2d ", arrnum[i]);
		sum = sum + arrnum[i];
	}
	average = (double)sum / MAXDATA1;

	printf("\n합계 : %d\n", sum);
	printf("평균 : %.1lf\n", average);

	int num;
	int count=0;
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	for (int i = 0; i < MAXDATA1; i++)
	{
		if (arrnum[i] == num)
		{
			count++;
		}
	}

	printf("찾은 정수의 갯수 : %d\n", count);

}