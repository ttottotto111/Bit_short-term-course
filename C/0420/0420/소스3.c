#include <stdio.h>

/*
struct tagstu 타입키워드를 갖는 학생 구조체 정의

맴버1 : char name[20];      //이름
맴버2 : int  grad;          //학년
맴버3 : char subject[20];   //학과
맴버4 : int  number;        //학번
*/

struct tagstu
{
	char name[20];
	int grad;
	char subject[20];
	int number;
};

void input_stu(struct tagstu *stu1)
{
	strcpy_s((*stu1).name,sizeof((*stu1).name), "김승욱");
	(*stu1).grad = 1;
	strcpy_s((*stu1).subject, sizeof((*stu1).subject), "컴퓨터 정보 보안");
	(*stu1).number = 201610472;
}

void print_stu(struct tagstu stu1)
{
	printf("이름 : %s\n학년 : %d\n과목 : %s\n학번 : %d\n", stu1.name, stu1.grad, stu1.subject, stu1.number);
}

void update_stu(struct tagstu *stu1, int grad)
{
	(*stu1).grad = 3;
}

void print_stu1(char name[], int grad, char* subject, int number)
{
	printf("이름 : %s\n", name);
	printf("학과 : %s\n", subject);
	printf("학년 : %d\n", grad);
	printf("학번 : %d\n", number);
}


int main()
{
	struct tagstu stu1;

	input_stu(&stu1);   //학생 정보를 입력..(문자열은 문자열 함수를 활용)

	print_stu(stu1);   //학생 정보를 출력

	update_stu(&stu1, 3);  //학년을 추가로 전달, 전달한 학년으로 stu1의 정보를 수정

	//변경된 결과가 출력
	printf("\n");
	print_stu1(stu1.name, stu1.grad, stu1.subject, stu1.number);

	return 0;
}
