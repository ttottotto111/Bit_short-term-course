#include <stdio.h>

//1. struct rect(int width, int height) 구조체 정의
struct rect
{
    int width;
    int height;
}
r = { 0,0 };

int input_rect(struct rect *r) 
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

int rectsize(struct rect *r) 
{
    return (*r).width * (*r).height;
}

//다음 main 문장을 수정하지 말고 문장에 맞는 적절한 함수를 구현하세요.
int main()
{
    struct rect r1, r2;

    //도형의 폭과 높이를 입력받는 input_rect 함수
    input_rect(&r1);

    input_rect(&r2);

    //2개의 구조체 정보를 전달받아 크기를 비교하여 같으면 1, 틀리면 0을 반환하는 equal함수
    if( equal(r1, r2) == 1)
        printf("두 사각형의 넓이는 같습니다.\n");
    else
        printf("두 사각형의 넓이는 다릅니다.\n");

    //1개의 구조체 정보를 전달받아 넓이를 반환하는 rectsize 함수
    int size = rectsize(&r1);
    printf("r1 사각형의 넓이는 %d입니다.\n", size);

    return 0;
}