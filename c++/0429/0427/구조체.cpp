//����ü : Ÿ�� ����� ���� ���� (������ ����)
#include <iostream>
using namespace std;

struct tagdata
{
};

typedef struct tagdata1
{
}data1;

int main()
{
	//c�����
	struct tagdata d1;
	data1 d2;

	//c++������ ���̻� struct Ű���带 Ÿ�Ը� ��� ���ص� ��.
	tagdata d3;
	tagdata1 d4;

	return 0;
}