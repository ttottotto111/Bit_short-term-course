//05 ������ �ݷ� �ʱ�ȭ
//��� ������ �ʱ�ȭ �Ҷ�
//1��� : { }�ȿ��� ���� ������ �̿��Ͽ� �ʱ�ȭ
//2��� : �ݷ� �ʱ�ȭ
//2����� ����� �����ϴ�. ������ ������ �ٸ�
//1��� : ������ ���� ������			int n1;  n1 = 0;
//2��� : ����� ���ÿ� �ʱ�ȭ ���		int n1 = 0; =>�� ����

//�� ��� �����߿� �ݵ�� ����� ���ÿ� �ʱ�ȭ �ϴ� ������ �ʿ��ϴٸ� �ݵ�� �ݷ��ʱ�ȭ�� �ʱ�ȭ
//ex) const����
#include <iostream>
using namespace std;

struct Data
{
	int num;
	char ch;
	const int NUM;
public:
	Data(): num(0), ch(' '), NUM(0)
	{
		//num = 0;
		//ch = ' ';
	}
	Data(int _num, char _ch) : num(_num), ch(_ch), NUM(_num)
	{
		num = _num + _num;
		//ch = _ch;
	}
};

int main()
{
	//int n;
	//const int n1 = 10;

	return 0;
}