/************************************************************
 function overloading
 -> 아래 코드가 정상적으로 동작할 수 있도록 함수 오버로딩을
	이용하여 구현하시오.
	출력 결과는 주석과 같이
*************************************************************/

#include <iostream>
using namespace std;

bool foo(int n1, int n2, int n3, int n4);
bool foo(int n1, int n2, int n3);
bool foo(int n1, int n2);
bool foo(int n1);

int main()
{
    foo(10, 20, 30, 40);    // 10 : 20 : 30 : 40 
    foo(10, 20, 30);        // 10 : 20 : 30
    foo(10, 20);            // 10 : 20
    foo(10);                // 10 

    return 0;
}

bool foo(int n1, int n2, int n3, int n4)
{
    cout << n1 << ":" << n2 << ":" << n3 << ":" << n4 << endl;
    return n1 == n2 == n3 == n4;
}

bool foo(int n1, int n2, int n3)
{
    cout << n1 << ":" << n2 << ":" << n3 << endl;
    return n1 == n2 == n3;
}

bool foo(int n1, int n2)
{
    cout << n1 << ":" << n2 << endl;
    return n1 == n2;
}

bool foo(int n1)
{
    cout << n1 << endl;
    return n1;
}