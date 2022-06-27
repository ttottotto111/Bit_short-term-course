//03 업캐스팅과 가상맴버함수
/*
만약 다수의 강아지, 고양이 객체를 생성해서 관리하고자 한다면?
Dog dog[5], Cat cat[5];
추가로 동물들의 종류가 늘어난다면?
동물별 배열의 갯수가 증가될 것이다.

하지만 upcasting을 사용한다면 하나의 배열로 해결이 가능하다.
Animal ani[100]
*/

#include <iostream>
using namespace std;

class Animal
{
public:
	//가상맴버함수
	//자식에 의해 재정의가 될만한 함수는 가상맴버 함수로 만든다.
	//부모의 포인터로 해당 메서드를 호출하면 자식의 재정의된 메서드가 호출된다.
	virtual void Sound() { cout << "????????????????" << endl; }
};

class Dog : public Animal
{
public:
	void Sound() { cout << "멍멍~~~" << endl; }
};

class Cat : public Animal
{
public:
	//오버라이딩(맴버함수의 재정의)
	void Sound() { cout << "야옹야옹~~~" << endl; }
};

int main()
{
	//업캐스팅을 이용한 통합 관리
	Animal* woori[4];		//10개의 객체의 주소를 저장할 수 있는 배열 생성
	woori[0] = new Dog;
	woori[1] = new Cat;
	woori[2] = new Cat;
	woori[3] = new Dog;

	//모든 동물소리들의 소리를 동일한 객체를 이용해 호출
	for (int i = 0; i < 4; i++)
	{
		woori[i]->Sound();		//????
	}

	return 0;
}
