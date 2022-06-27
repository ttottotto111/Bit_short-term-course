//구조체 : 타입 사용의 편리성 제공 (개선된 문법)
#include <iostream>
using namespace std;

struct tagdata
{
};

typedef struct tagdata1
{
}data1;

int main()
{
	//c언어라면
	struct tagdata d1;
	data1 d2;

	//c++에서는 더이상 struct 키워드를 타입명에 사용 안해도 됨.
	tagdata d3;
	tagdata1 d4;

	return 0;
}