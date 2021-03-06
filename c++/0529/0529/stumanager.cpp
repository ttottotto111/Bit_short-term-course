//stumanager.cpp

#include "stumanager.h"

stuManager::stuManager()
    :max(SetMaxStu())
{
    //vector의 크기를 max값으로 재설정
    //그리고 모든 공간의 값을 0으로 초기화
    base.resize(max, 0);
}

stuManager::~stuManager()
{
    for (int i = 0; i < max; i++)
    {
        if (base[i] != 0) //실제 학생이 보관된 곳인지 확인
        {
            delete base[i];
        }
    }
}

int stuManager::SetMaxStu()
{
    return wbglbal::getnum("최대 관리할 학생 수를 입력하세요");
}

void stuManager::Run()
{
    int key = 0;
    while ((key = SelectMenu()) != ESC)
    {
        switch (key)
        {
        case F1: AddStu(); break;
        case F2: RemoveStu(); break;
        case F3: SearchStuByNum(); break;
        case F4: SearchStuByName(); break;
        case F5: ListAll(); break;
        case F6: UpdateStu(); break;
        default: cout << "잘못된 메뉴를 선택하였습니다." << endl;
        }
        wbglbal::pause();
    }

}

keydata stuManager::SelectMenu()
{
    wbglbal::clrscr();
    ListAll();
    cout << "---------------------------------------------------" << endl;
    cout << "메뉴 [ESC]:종료" << endl;
    cout << "[F1]:학생 추가     [F2]:학생 삭제 [F3]:번호로 검색" << endl;
    cout << "[F4]:이름으로 검색 [F5]:전체 보기 [F6]:학생 수정" << endl;
    cout << "메뉴를 선택하세요" << endl;
    return wbglbal::getkey();

}

void stuManager::ListAll()
{
    for (int i = 0; i < max; i++)
    {
        cout << "[" << i << "] : ";
        Stu* stu = base[i];
        if (base[i])        //실제 학생이 보관되었는지 확인
        {
            cout << base[i];        //출력연산자재정의
        }
        cout << endl;
    }
}

void stuManager::AddStu()
{
    int num = 0;
    char buf[50];
    sprintf_s(buf, "추가할 학생 번호를 입력하세요. (0~%d)", max - 1);
    num = wbglbal::getnum(buf);

    if ((num <= 0) || (num > max - 1))
    {
        cout << "범위를 벗어났습니다." << endl;

        return;
    }

    if (base[num - 1])
    {
        cout << "이미 보관된 학생이 있습니다." << endl;
        return;
    }

    char name[20];
    strcpy_s(name, sizeof(name), wbglbal::getstr("이름을 입력하세요"));

    base[num] = new Stu(num, name);
    cout << "저장되었습니다." << endl;
}

void stuManager::RemoveStu()
{
    int num;

    char buf[50];
    //buf에 문자열을 저장
    sprintf_s(buf, "삭제할 학생 번호를 입력하세요. (0~%d)", max - 1);

    num = wbglbal::getnum(buf);

    if ((num <= 0) || (num > max - 1))
    {
        cout << "범위를 벗어났습니다." << endl;
        return;
    }

    if (base[num] == 0) //실제 학생이 보관되었는지 확인
    {
        cout << "보관된 학생이 없습니다." << endl;
        return;
    }

    delete base[num];  //힙에 있는 학생정보 삭제

    //벡터의 저장주소값을 0으로 초기화 
    base[num] = 0; //초기값 0으로 다시 설정
}

void stuManager::SearchStuByNum()
{
    int num = 0;
    char buf[50];
    //buf에 문자열을 저장
    sprintf_s(buf, "검색할 학생 번호를 입력하세요. (0~%d)",
        max - 1);

    num = wbglbal::getnum(buf);

    if ((num < 0) || (num > max - 1))
    {
        cout << "범위를 벗어났습니다." << endl;
        return;
    }

    if (base[num] == 0) //실제 학생이 보관되었는지 확인
    {
        cout << num << "번 학생은 보관되지 않았습니다." << endl;
        return;
    }

    Stu* stu = base[num];
    cout << stu << endl;
}

void stuManager::SearchStuByName()
{
    char name[20];
    char buf[50];
    //buf에 문자열을 저장
    sprintf_s(buf, "검색할 학생 이름을 입력하세요. (0~%d)",
        max - 1);

    strcpy_s(name, sizeof(name), wbglbal::getstr(buf));

    for (int i = 0; i < max; i++)
    {
        if (base[i]) //실제 학생이 보관되었는지 확인
        {
            if (strcmp(base[i]->GetName(), name) == 0)
            {
                cout << base[i] << endl;
                return;
            }
        }
    }
    cout << name << " 학생은 보관되지 않았습니다." << endl;
}

void stuManager::UpdateStu()
{
    char name[20];
    char buf[50];
    //buf에 문자열을 저장
    sprintf_s(buf, "수정할 학생 이름을 입력하세요. (0~%d)", max - 1);
    strcpy_s(name, sizeof(name), wbglbal::getstr(buf));

    for (int i = 0; i < max; i++)
    {
        if (base[i]) //실제 학생이 보관되었는지 확인
        {
            if (strcmp(base[i]->GetName(), name) == 0)
            {
                Stu* stu = base[i];
                //성적 입력 처리
                int c = wbglbal::getnum("C언어점수");
                int cpp = wbglbal::getnum("C++언어점수");
                int java = wbglbal::getnum("JAVA언어점수");
                stu->SetJumsu(c, cpp, java);    //자신의 맴버변수의 수정은 맴버 함수를 통해서

                cout << "수정되었습니다." << endl;

                return;
            }
        }
    }
    cout << name << " 수정되지 않았습니다." << endl;
}