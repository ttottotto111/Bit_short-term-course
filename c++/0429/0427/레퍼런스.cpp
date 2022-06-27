//레퍼런스

/*
참조자 == 별명
*/

#include <iostream>
using namespace std;

void exam1()
{
	int num = 10;
	int& rnum = num;	//rnum : 레퍼런스 => num 변수의 별명
						//반드시 선언과 동시에 초기화
	//==============================================================
	cout << num << endl;	//10

	rnum = 20;
	cout << num << endl;	//20

	//동일한 주소값을 반환한다.
	cout << &rnum << endl;
	cout << &num << endl;
}

//참조자 사용 예
/*
1) 값 전달 (call by value)
2) 주소값 전달 (call by address) : 원본의 값을 변경할 목적
3) 참조자 전달 (call by reference) : 원본전달과 동일한 결과를 얻는다.
*/
void exam2_1(int n1, int* n2, int& n3)
{
	n1 = 20;	//exam2_1의 스택메모리에 있는 n1의 변수를 수정.
	*n2 = 30;	//exam2의 스택메모리에 있는 num1의 변수를 수정.
	n3 = 40;	//exam2의 스택메모리에 있는 num1의 별칭이다.
}

void exam2()
{
	int num1 = 10;

	exam2_1(num1, &num1, num1);	//값, 주소값, 값

	cout << num1 << endl;
}

//참조자 사용예 2: 참조자 리턴
int arr[3] = { 10, 20, 30 };	//함수밖 선언 == 전역변수 -> 전역정적메모리에 생성
int exam3_1(int idx) { return arr[idx]; }
int& exam3_2(int idx) { return arr[idx]; }

void exam3()
{
	int n1 = exam3_1(2);
	cout << n1 << endl;		//30

	int n2 = exam3_2(2);
	cout << n2 << endl;		//30
		//==================================
	//함수 호출은 대입연산의 R value에서 이루어진다.
	//exam3_1(2) = 200;		//30 = 200;
	exam3_2(2) = 200;		//arr[2] = 200;

	cout << arr[0] << "," << arr[1] << "," << arr[2] << endl;
}

int main()
{
	exam3();
	return 0;
}