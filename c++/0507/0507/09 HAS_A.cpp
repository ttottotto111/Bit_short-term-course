//09 HAS_A
/*
[클래스와 클래스의 관계]
1)has a == 소유
2)is a == 상속
-----------------------------------------------
사람이 총을 소유한다.	[객체 : 사람, 총]
학새잉 펜을 가지고 있다. [객체 : 학생, 펜]

*/

#include <iostream>
using namespace std;

//1. 일시적인 소유 관계
//학생이 펜을 소유하고 있다. [객체 : 학생, 펜]

//펜 클래스 정의 ==> 추상화 VS 정밀화(눈에 보이는 것을 똑같이 그리는것)
class pen
{
	//1. 멤버 변수
private:
	char color[20];
	int width;

	//2. 생성자 & 소멸자
public:
	pen(const char* _color, int _width)
	{
		strcpy_s(color, sizeof(color), _color);
		width = _width;
	}
	~pen()
	{

	}

	//3. 메서드(멤버 함수)
public:
	void Write(const char* msg)
	{
		cout << "[" << color << ":";
		cout << width << "]";
		cout << msg << endl;
	}
};

//이름, 학번
//펜으로 글씨를 쓸 수 있는 기능
class student
{
private:
	char name[20];
	int number;
	pen* mypen;

public:
	student(const char* _name, int _number)
	{
		strcpy_s(name, sizeof(name), _name);
		number = _number;
		mypen = NULL;	//소유하고 있지 않은 상태
	}
	~student()
	{

	}

public:
	void 펜을잡다(pen *p)
	{
		mypen = p;	//펜의 소유가 일시적 발생
	}
	void 글씨를쓴다(const char *msg)	
	{
		if (mypen == NULL)		//펜을 소유하고 있지 않다면
			return;
		mypen->Write(msg);		//펜을 소유한 이유...펜의 기능을 사용하려고
	}

	void 펜을놓는다()
	{
		mypen = NULL;			//펜의 소유가 사라짐.
	}
};

int main()
{
	//객체를 생성
	student stu("홍길동", 111);
	pen redpen("빨강", 2);
	pen bluepen("파랑", 1);
	pen greenpen("녹색", 5);

	//학생이 글씨를 쓰고 싶다.
	stu.펜을잡다(&redpen);
	stu.글씨를쓴다("글씨를 쓰고 있습니다.");
	stu.펜을놓는다();

	stu.글씨를쓴다("다시 글씨를 쓰고 있습니다.");

	return 0;
}