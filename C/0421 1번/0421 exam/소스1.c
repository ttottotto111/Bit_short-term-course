#include <stdio.h>

//1. struct rect(int width, int height) ����ü ����
struct rect
{
    int width;
    int height;
}
r = { 0,0 };

int input_rect(struct rect *r) 
{
    printf("������ ���� �Է��Ͻÿ�: ");
    scanf_s("%d", &(*r).width);
    printf("������ ���̸� �Է��Ͻÿ�: ");
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

//���� main ������ �������� ���� ���忡 �´� ������ �Լ��� �����ϼ���.
int main()
{
    struct rect r1, r2;

    //������ ���� ���̸� �Է¹޴� input_rect �Լ�
    input_rect(&r1);

    input_rect(&r2);

    //2���� ����ü ������ ���޹޾� ũ�⸦ ���Ͽ� ������ 1, Ʋ���� 0�� ��ȯ�ϴ� equal�Լ�
    if( equal(r1, r2) == 1)
        printf("�� �簢���� ���̴� �����ϴ�.\n");
    else
        printf("�� �簢���� ���̴� �ٸ��ϴ�.\n");

    //1���� ����ü ������ ���޹޾� ���̸� ��ȯ�ϴ� rectsize �Լ�
    int size = rectsize(&r1);
    printf("r1 �簢���� ���̴� %d�Դϴ�.\n", size);

    return 0;
}