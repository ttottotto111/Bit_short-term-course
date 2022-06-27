/************************************************************
아래 코드가 실행될 수 있는 클래스 구현
       Student 클래스는 아래의 맴버변수는 아래와 같다.
       char number[20],  char name[20],  , int score
*************************************************************/
#include <iostream>
using namespace std;

class Student
{
private:
    char number[20];
    char name[20];
    int score;

public:
    Student(const char* _number) : name(" "), score(0)
    {
        strcpy_s(number, sizeof(number), _number);
    }
    
    void SetName(const char* _name)
    {
        strcpy_s(name, sizeof(name), _name);
    }

    void SetScore(int _score)
    {
        score = _score;
    }

    const char* GetStNum() { return number; }
    const char* GetName() { return name; }
    int GetScore() { return score; }
};

void main()
{
    Student Kim("8906123");	// number만 전달된정보로 초기화, name은 "", score는 0으로 초기화
    Kim.SetName("홍길동");  // 이름 변경
    Kim.SetScore(99);	// 단 해당 Set메서드에서 0~100의  값만 처리할 수 있도록 할것 
                                      // 그 이외의 값이 나오면 리턴

    cout << "학번 : " << Kim.GetStNum() << endl;   // GetStNum() : 학번 반환
    cout << "이름 : " << Kim.GetName() << endl;    // GetName() : 이름 반환
    cout << "점수 : " << Kim.GetScore() << endl;     // GetScore() : 점수 반환
}