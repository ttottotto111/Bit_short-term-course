/************************************************************
 아래 코드가 실행될 수 있는 클래스 구현
       단, Position클래스는 아래와 같이 맴버변수가 구성되어 있다.
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
    Position Here(30, 10, 'A');  //x 30, y 10, ch 'A'로 초기화
    Position There(40, 5);      //x 40, y 5, ch 는 'X'로 초기화
    Position Where('K');      // x 0, y 0, ch 는 'K'로 초기화

    Here.OutPosition();    //저장된 오른쪽 형태로 출력 :  [30,20] => A
    There.OutPosition();
    Where.OutPosition();
}
