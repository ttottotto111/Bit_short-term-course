#include <stdio.h>

int g_num = 0; //�������� : ���α׷� ��ü���� ������ ����
static int g_snum; //���� �������� : extern���Ұ� -> �ܺο��� ������ �Ұ�

int main()
{
	g_num = 12;
	return 0;
}

void foo()
{
	g_num = 11;
}