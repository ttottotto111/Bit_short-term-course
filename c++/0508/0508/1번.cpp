/************************************************************
���� class �� ���������� �����ϵ��� �����ڸ� �ϼ��Ͻÿ�
      �����ڿ��� ���� ���ڸ� data�� �����Ͻÿ�.
*************************************************************/
#include <iostream>
using namespace std;

class Sample
{
    int    data;
public:
    //������ ����
    Sample(int n1)
    {
        data = n1;
    }
    Sample()
    {
        data = 0;
    }
public:
    void Print() { cout << "���尪 : " << data << endl; }
};

void main()
{
    Sample   a1(10);
    Sample   a2;       // ���޵� ���� �����Ƿ� 0���� �ʱ�ȭ �Ұ�

    a1.Print();
    a2.Print();
}
