//04_함수오버로딩 : C++에서 추가된 문법
/*
C에서의   함수 식별자는 함수명
C++에서의 함수 식별자는 함수명 + 매개변수리스트
 - 함수의 이름이 같더라도 매개변수가 다르면 다른 함수로 관주.
 왜 필요하냐? 사용자의 편리성
*/
#include <iostream>
using namespace std;

/*
bool isequal(int n1, int n2)
{
    return n1 == n2;
}

bool isequal(float n1, float n2)
{
    return n1 == n2;
}

bool isequal(char n1, char n2)
{
    return n1 == n2;
}

int main()
{
    cout << isequal(10, 20) << endl;
    cout << isequal(20, 20) << endl;

    cout << isequal(10.1f, 20.2f) << endl;
    cout << isequal(20.1f, 20.1f) << endl;

    return 0;
}
*/

int add(int n1, int n2)
{
    return n1 + n2;
}

float add(float n1, float n2)
{
    return n1 + n2;
}

double add(double n1, double n2)
{
    return n1 + n2;
}

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10.1f, 20.1f) << endl;
    cout << add(20.3, 30.3) << endl;
}