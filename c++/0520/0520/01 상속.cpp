//01 상속

/*
-내가 만들고자 하는 객체를 분석해 보았더니 공통 부분이 있다.-
강아지 : 소리를 낸다()
고양이 : 소리를 낸다()
*/

#include <iostream>
using namespace std;


//step 1 : 캡슐화 개념으로 클래스 구성
/*

class Dog
{
public:
	void Sound() { cout << "멍멍~~~" << endl; }
};

class Cat
{
public:
	void Sound() { cout << "야옹~~~" << endl; }
};

int main()
{
	return 0;
}
*/

//step 2 상속 구조로 개선
//자식들의 공통부분을 부모에게

class Animal
{
public:
	void Sound() { cout << "??????????????????" << endl; }
};

class Dog : public Animal
{
public:
	//오버라이딩
	void Sound() { cout << "멍멍~~~" << endl; }
};

class Cat : public Animal
{
public:
	//오버라이딩
	void Sound() { cout << "야옹야옹~~~" << endl; }
};

int main()
{
	Dog dog;		dog.Sound();
	Cat cat;		cat.Sound();
	return 0;
}