//아래 코드는 소스1의 qual 함수를 수정하였습니다.
//소스1은 값전달, 소스2는 주소값 전달 

#include <stdio.h>

//마찬가지로 소스1에서 구현한 기능에 equals1 함수를 추가하여 주세요.
//아래 main함수에 equals1을 사용하는 코드를 넣었습니다.
//그리고 추가로 equlas2 함수와 equlas3함수도 만들어 주세요.
struct rect
{
	int width;
	int height;
}
r = { 0,0 };

int input_rect(struct rect* r)
{
	printf("도형의 폭을 입력하시오: ");
	scanf_s("%d", &(*r).width);
	printf("도형의 높이를 입력하시오: ");
	scanf_s("%d", &(*r).height);
}

int equal(struct rect r1, struct rect r2)
{
	if (r1.width * r1.height == r2.width * r2.height)
		return 1;
	return 0;
}

int equal1(struct rect *r1, struct rect *r2)
{
	if ((*r1).width * (*r1).height == (*r2).width * (*r2).height)
		return 1;
	return 0;
}

int equal2(int r1, int r2, int r3, int r4)
{
	if (r1 * r2 == r3 * r4)
		return 1;
	return 0;
}

int equal3(int *r1, int *r2, int *r3, int *r4)
{
	if ((*r1) * (*r2) == (*r3) * (*r4))
		return 1;
	return 0;
}

int rectsize(struct rect* r)
{
	return (*r).width * (*r).height;
}

int main()
{
	struct rect r1, r2;

	//도형의 폭과 높이를 입력받는 input_rect 함수
	input_rect(&r1);

	input_rect(&r2);

	//2개의 구조체 정보를 전달받아 크기를 비교하여 같으면 1, 틀리면 0을 반환하는 equal함수
	if (equal(r1, r2) == 1)
		printf("두 사각형의 넓이는 같습니다.\n");
	else
		printf("두 사각형의 넓이는 다릅니다.\n");

	if (equal1(&r1, &r2) == 1)
		printf("두 사각형의 넓이는 같습니다.\n");
	else
		printf("두 사각형의 넓이는 다릅니다.\n");

	if (equal2(r1.width, r1.height, r2.width, r2.height) == 1)
		printf("두 사각형의 넓이는 같습니다.\n");
	else
		printf("두 사각형의 넓이는 다릅니다.\n");

	if (equal3(&r1.width, &r1.height,  &r2.width, &r2.height) == 1)
		printf("두 사각형의 넓이는 같습니다.\n");
	else
		printf("두 사각형의 넓이는 다릅니다.\n");

	//1개의 구조체 정보를 전달받아 넓이를 반환하는 rectsize 함수
	int size = rectsize(&r1);
	printf("r1 사각형의 넓이는 %d입니다.\n", size);

	return 0;
}
