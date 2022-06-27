//02 업캐스팅
/*
[형변환 : 부모과 자식간의 형변환 관계]
단, 주소값 대입 개념
up casting : 자식 --> 부모에게 대입, 정상적인 형변환
down casting : 부모 --> 자식에게 대입, 원래타입으로 되돌릴때 사용.
*/
#include <iostream>
using namespace std;

class Animal
{
public:
	void Sound() { cout << "??????????????????" << endl; }
	void 먹는다() { cout << "먹는다" << endl; }
};

class Dog : public Animal
{
public:
	//오버라이딩	
	void Sound() { cout << "멍멍~~~" << endl; }		//재정의
	void 물기() { cout << "물다" << endl; }			//추가 확장
};

class Cat : public Animal
{
public:
	//오버라이딩
	void Sound() { cout << "야옹야옹~~~" << endl; }
	void 발톱내밀기() { cout << "발톱내밀기" << endl; }
};

int main()
{
	Dog dog;
	dog.Sound();		dog.물기();		dog.먹는다();
	Cat cat;
	cat.Sound();		cat.발톱내밀기();	cat.먹는다();

	//Up casting
	//컴파일러의 입장에서는 문법검사할 때 ani2 의 타입은 Animal*
	Animal* ani2 = &dog;
	Dog* pdog = (Dog*)ani2;	//DownCasting 원래타입으로 되돌리기.

	//=====================================
	//Down casting은 조심해야할 형변환
	//강제적인 형변환을 하기 때문에 원래 자식타입이 변경되도 에러를 감지못함
	//반드시 자신의 타입으로 형변환 하는 경우만 사용한다.
	Cat* pCat = (Cat*)ani2;
	pCat->발톱내밀기();

	//Up casting
	Animal* ani = new Dog;
	Animal* ani1 = new Cat;
	return 0;
}