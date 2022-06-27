//01 �����������
/*
��� ���� �տ� static Ű���ŵ带 �߰�
Ŭ���� ����� �θ�(�ν��Ͻ� ����� �ƴ�)
*/

#include <iostream>
using namespace std;

class Card
{
	//�ν��Ͻ����(��� �ν��Ͻ� ��ü���� �ٸ� ���� ������ �Ѵ�.)
	int number;		//1~10, J(11), Q(12), K(13)
	string shape;	//��, ũ, ��, ��
	static int width;		//ũ��
	static int height;		//ũ��

	//Ŭ�������(��� �ν��Ͻ� ��ü���� ������ ���� ���´�.)
public:
	Card(int _number, string _shape)
	{
		number = _number;
		shape = _shape;
	}

public:
	void Print()
	{
		cout << number << ", " << shape << ", " << width << ", " << height << endl;
	}
};

int Card::height = 600;
int Card::width = 200;

int main()
{
	Card c1(1, "Ŭ�ι�");
	Card c2(2, "���̾Ƹ��");

	c1.Print();
	c2.Print();
	return 0;
}