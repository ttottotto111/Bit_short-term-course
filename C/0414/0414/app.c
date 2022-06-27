//ahh.c

#include <stdio.h>
#include <stdlib.h>		//system()
#include <conio.h>		//_getch()

#include "app.h"
#include "sample.h"

//초기화 기능
void app_init()
{
	logo();

	sample_init();
}

//엔진 기능
void app_run()
{
	while (1)
	{
		int idx;
		system("cls");
		sample_printall();
		idx = menuprint();
		system("pause");
		switch (idx)
		{
		case '1':	sample_insert(); break;
		case '2':	sample_select(); break;
		case '3':	sample_update(); break;
		case '4':	sample_delete(); break;
		case '5':	return;
		}
		system("pause");
	}
}

//종료 처리기능
void app_exit()
{
	ending();
}


void logo()
{
	system("cls");	//"cls" 화면을 지우는 명령어
	printf("***********************************\n");
	printf("우송비트 단기 ??차 c언어 과정\n");
	printf("함수와 배열을 이용한 프로그램\n");
	printf("2020년 04월 14일\n");
	printf("ccm\n");
	printf("***********************************\n");
	system("pause");	//"pause" : 잠깐 멈춤 명령어
}

void ending()
{
	system("cls");
	printf("***********************************\n");
	printf("프로그램을 종료합니다.\n");
	printf("***********************************\n");
	system("pause");
}

char menuprint()
{
	printf("***********************************\n");
	printf("[1] 입력(insert)\n");
	printf("[2] 검색(select)\n");
	printf("[3] 수정(update)\n");
	printf("[4] 삭제(delete)\n");
	printf("[5] 종 료\n");
	printf("***********************************\n");

	char idx;
	idx = _getch();		//특수한 형태의 문자 입력함수
	return idx;
	//return _getch(); -> 엔터키 없이 바로 버퍼로 전송
}