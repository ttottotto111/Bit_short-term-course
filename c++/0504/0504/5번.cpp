/************************************************************
main �Լ��� ������ ������ �ڵ带 �Ϸ��Ͻÿ�.
*************************************************************/

#include <iostream>
using namespace std;

struct Jumsu
{
    int kor;
    int eng;
    int sum;
    float average;

    void setKor(int setkor)
    {
        kor = setkor;
    }

    void setEng(int seteng)
    {
        eng = seteng;
    }

    void setSum()
    {
        sum = kor + eng;
    }

    void setAverage()
    {
        average = (float)sum / 2;
    }

    int getSum()
    {
        return sum;
    }

    void Print()
    {
        cout << "���� : " << kor << endl;
        cout << "���� : " << eng << endl;
        cout << "��   : " << sum << endl;
        cout << "��� : " << (float)average << endl;
    }
};


int main()
{
    Jumsu j1;
    j1.setKor(100);    //kor ������ ����
    j1.setEng(95);     //eng  ������ ����
    j1.setSum();       //����� eng������ kor������ ���� ����� sum�� ����
    j1.setAverage();  // sum�� ����� ������ 2�� ���� ������� average�� ����
    cout << "���� : " << j1.getSum() << endl;  //sum�� ����� ���� ��ȯ
    j1.Print();        //�Ʒ��� ���� ���
                      //���� : 100
                      //���� : 95
                      //��    : 195
                      //��� : 92.5 


    return 0;
}
