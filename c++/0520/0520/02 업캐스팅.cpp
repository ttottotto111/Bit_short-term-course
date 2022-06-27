//02 ��ĳ����
/*
[����ȯ : �θ�� �ڽİ��� ����ȯ ����]
��, �ּҰ� ���� ����
up casting : �ڽ� --> �θ𿡰� ����, �������� ����ȯ
down casting : �θ� --> �ڽĿ��� ����, ����Ÿ������ �ǵ����� ���.
*/
#include <iostream>
using namespace std;

class Animal
{
public:
	void Sound() { cout << "??????????????????" << endl; }
	void �Դ´�() { cout << "�Դ´�" << endl; }
};

class Dog : public Animal
{
public:
	//�������̵�	
	void Sound() { cout << "�۸�~~~" << endl; }		//������
	void ����() { cout << "����" << endl; }			//�߰� Ȯ��
};

class Cat : public Animal
{
public:
	//�������̵�
	void Sound() { cout << "�߿˾߿�~~~" << endl; }
	void ���鳻�б�() { cout << "���鳻�б�" << endl; }
};

int main()
{
	Dog dog;
	dog.Sound();		dog.����();		dog.�Դ´�();
	Cat cat;
	cat.Sound();		cat.���鳻�б�();	cat.�Դ´�();

	//Up casting
	//�����Ϸ��� ���忡���� �����˻��� �� ani2 �� Ÿ���� Animal*
	Animal* ani2 = &dog;
	Dog* pdog = (Dog*)ani2;	//DownCasting ����Ÿ������ �ǵ�����.

	//=====================================
	//Down casting�� �����ؾ��� ����ȯ
	//�������� ����ȯ�� �ϱ� ������ ���� �ڽ�Ÿ���� ����ǵ� ������ ��������
	//�ݵ�� �ڽ��� Ÿ������ ����ȯ �ϴ� ��츸 ����Ѵ�.
	Cat* pCat = (Cat*)ani2;
	pCat->���鳻�б�();

	//Up casting
	Animal* ani = new Dog;
	Animal* ani1 = new Cat;
	return 0;
}