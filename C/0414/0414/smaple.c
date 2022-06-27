//전역 변수 : 함수 밖에 선언된 변수
#include "sample.h"
#include <stdio.h>

int g_arr[DATAMAX];

void sample_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_arr[i] = -1;
	}
}

void sample_printall()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		printf("%3d", i);
	}
	printf("\n");
	printf("---------------------------------\n");
	for (int i = 0; i < DATAMAX; i++)
	{
		printf("%3d", g_arr[i]);
	}
	printf("\n");
}

void sample_insert()
{
	int idx, data;

	printf("저장위치(0~%d) >> ", DATAMAX - 1);
	scanf_s("%d", &idx);
	if (idx < 0 || idx >= DATAMAX)
	{
		printf("잘못된 인덱스를 입력하셨습니다.\n");
		return;
	}
	else
	{
		if (g_arr[idx] != -1)
		{
			printf("데이터가 존재합니다.\n");
			return;
		}
	}
	printf("저장값 : ");
	scanf_s("%d", &data);

	g_arr[idx] = data;

	printf("저장되었습니다.\n");
}

//사용자로부터 검색하고자 하는 숫자를 입력
//배열을 순회하면서 배열이 가지고 있는 값과 입력한 숫자값을 비교
//동일시 찾다는 문자열 출력
void sample_select()
{
	int a;
	printf("숫자 입력 : ");
	scanf_s("%d", &a);

	for (int i = 0; i < DATAMAX; i++)
	{
		if (g_arr[i] == a)
		{
			printf("%d번째 인덱스 -> %d\n", i, g_arr[i]);
			return;
		}
	}
	printf("숫자가 없습니다\n");
}

//사용자에게 수정값 받는다
//값을 찾은 배열의 인덱스 위치에 저장
//못찾을시 숫자가 없습니다 출력
void sample_update()
{
	int a;
	printf("숫자 입력 : ");
	scanf_s("%d", &a);

	for (int i = 0; i < DATAMAX; i++)
	{
		if (g_arr[i] == a);
		{
			int b;
			printf("변경할 숫자를 입력 : ");
			scanf_s("%d", &b);
			g_arr[i] = b;
			return;
		}
	}
	printf("숫자가 없습니다\n");
}

//검색하고자 하는 숫자를 입력받는다.
//배열을 순회하면서 배열이 가지고 있는 값과 입력한 숫자값을 비교한다.
//만약, 동일하면 아래와 같이 출력한다.
//      해당 배열의 인덱스에 저장된 값을 -1로 변경한다.
//      못찾았으면 "숫자가 없습니다." 출력
void sample_delete()
{
	int a;
	printf("삭제할 인덱스 입력 : ");
	scanf_s("%d", &a);

	for (int i = 0; i < DATAMAX; i++)
	{
		if (g_arr[i] == a);
		{
			g_arr[i] = -1;
			return;
		}
	}
	printf("숫자가 없습니다\n");
}
