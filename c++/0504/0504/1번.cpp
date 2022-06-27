/************************************************************
 namespace
//������ �߰��Ͽ� �Ʒ� �ڵ尡 ����ǵ��� �Ұ�
//��Ʈ : sam::goo() �ڵ带 ������ ��
*************************************************************/

#include <iostream>
using namespace std;

namespace sam
{
	void goo() {
		cout << " sam::goo()" << endl;
	}
}

namespace one
{
	void foo() {
		cout << " one::foo()" << endl;
	}
}

namespace two
{
	void foo()
	{
		cout << " two::foo()" << endl;
	}
}

void foo() { cout << " foo()" << endl; }

	int main()
	{
		foo();			// global foo()
		sam::goo();		//sam::goo()
		one::foo();		// one::foo()
		two::foo();		// two::foo()

		return 0;
	}
