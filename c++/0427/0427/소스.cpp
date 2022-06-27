//소스.cpp
//#include <stdio.h>
//
//int main()
//{
//	printf("Hello, World\n");
//
//	return 0;
//}
//---------------------------------------------------------------------------

//C++의 문법을 활용해서 코딩
//#include <iostream>		//c++기본h파일
//						//미리 제공되는 라이브러리 h일경우 .h를 생략
//						//사용자가 정의한h는 .h를 붙여야 함.
//
//int main()
//{
//	std::cout << "Hello, World\n";
//	std::cout << "Hello, World" << std::endl;		//권장방법
//	return 0;
//}
//---------------------------------------------------------------------------


//#include <iostream>		//c++기본h파일
//						//미리 제공되는 라이브러리 h일경우 .h를 생략
//						//사용자가 정의한h는 .h를 붙여야 함.
//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "Hello, World\n";
//	cout << "Hello, World" << endl;		//권장방법
//	return 0;
//}
//---------------------------------------------------------------------------

#include <iostream>		//c++기본h파일
						//미리 제공되는 라이브러리 h일경우 .h를 생략
						//사용자가 정의한h는 .h를 붙여야 함.
using namespace std;	//무조건 std 공간에 있는것을 쓴다.

int main()
{
	cout << "Hello, World\n";
	cout << "Hello, World" << endl;		//권장방법
	return 0;
}