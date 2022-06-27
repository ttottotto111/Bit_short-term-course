/************************************************************
 �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
       ��, PositionŬ������ �Ʒ��� ���� �ɹ������� �����Ǿ� �ִ�.
       int x,  int y, char ch
*************************************************************/
#include <iostream>
using namespace std;

class Position
{
    int x;
    int y;
    char ch;

public:
    Position(int _x, int _y, char _ch)
    {
        x = _x;
        y = _y;
        ch = _ch;
    }
    Position(int _x, int _y)
    {
        x = _x;
        y = _y;
        ch = 'X';
    }
    Position(char _ch)
    {
        x = 0;
        y = 0;
        ch = _ch;
    }

    void OutPosition()
    {
        cout << "[" << x << ", " << y << "]" << "=>" << ch << endl;
    }
};


void main()
{
    Position Here(30, 10, 'A');  //x 30, y 10, ch 'A'�� �ʱ�ȭ
    Position There(40, 5);      //x 40, y 5, ch �� 'X'�� �ʱ�ȭ
    Position Where('K');      // x 0, y 0, ch �� 'K'�� �ʱ�ȭ

    Here.OutPosition();    //����� ������ ���·� ��� :  [30,20] => A
    There.OutPosition();
    Where.OutPosition();
}
