#include <stdio.h>

int g_num = 0; //전역변수 : 프로그램 전체에서 접근이 가능
static int g_snum; //정적 전역변수 : extern사용불가 -> 외부에서 접근이 불가

int main()
{
	g_num = 12;
	return 0;
}

void foo()
{
	g_num = 11;
}