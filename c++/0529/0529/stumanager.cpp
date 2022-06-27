//stumanager.cpp

#include "stumanager.h"

stuManager::stuManager()
    :max(SetMaxStu())
{
    //vector�� ũ�⸦ max������ �缳��
    //�׸��� ��� ������ ���� 0���� �ʱ�ȭ
    base.resize(max, 0);
}

stuManager::~stuManager()
{
    for (int i = 0; i < max; i++)
    {
        if (base[i] != 0) //���� �л��� ������ ������ Ȯ��
        {
            delete base[i];
        }
    }
}

int stuManager::SetMaxStu()
{
    return wbglbal::getnum("�ִ� ������ �л� ���� �Է��ϼ���");
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
        default: cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
        }
        wbglbal::pause();
    }

}

keydata stuManager::SelectMenu()
{
    wbglbal::clrscr();
    ListAll();
    cout << "---------------------------------------------------" << endl;
    cout << "�޴� [ESC]:����" << endl;
    cout << "[F1]:�л� �߰�     [F2]:�л� ���� [F3]:��ȣ�� �˻�" << endl;
    cout << "[F4]:�̸����� �˻� [F5]:��ü ���� [F6]:�л� ����" << endl;
    cout << "�޴��� �����ϼ���" << endl;
    return wbglbal::getkey();

}

void stuManager::ListAll()
{
    for (int i = 0; i < max; i++)
    {
        cout << "[" << i << "] : ";
        Stu* stu = base[i];
        if (base[i])        //���� �л��� �����Ǿ����� Ȯ��
        {
            cout << base[i];        //��¿�����������
        }
        cout << endl;
    }
}

void stuManager::AddStu()
{
    int num = 0;
    char buf[50];
    sprintf_s(buf, "�߰��� �л� ��ȣ�� �Է��ϼ���. (0~%d)", max - 1);
    num = wbglbal::getnum(buf);

    if ((num <= 0) || (num > max - 1))
    {
        cout << "������ ������ϴ�." << endl;

        return;
    }

    if (base[num - 1])
    {
        cout << "�̹� ������ �л��� �ֽ��ϴ�." << endl;
        return;
    }

    char name[20];
    strcpy_s(name, sizeof(name), wbglbal::getstr("�̸��� �Է��ϼ���"));

    base[num] = new Stu(num, name);
    cout << "����Ǿ����ϴ�." << endl;
}

void stuManager::RemoveStu()
{
    int num;

    char buf[50];
    //buf�� ���ڿ��� ����
    sprintf_s(buf, "������ �л� ��ȣ�� �Է��ϼ���. (0~%d)", max - 1);

    num = wbglbal::getnum(buf);

    if ((num <= 0) || (num > max - 1))
    {
        cout << "������ ������ϴ�." << endl;
        return;
    }

    if (base[num] == 0) //���� �л��� �����Ǿ����� Ȯ��
    {
        cout << "������ �л��� �����ϴ�." << endl;
        return;
    }

    delete base[num];  //���� �ִ� �л����� ����

    //������ �����ּҰ��� 0���� �ʱ�ȭ 
    base[num] = 0; //�ʱⰪ 0���� �ٽ� ����
}

void stuManager::SearchStuByNum()
{
    int num = 0;
    char buf[50];
    //buf�� ���ڿ��� ����
    sprintf_s(buf, "�˻��� �л� ��ȣ�� �Է��ϼ���. (0~%d)",
        max - 1);

    num = wbglbal::getnum(buf);

    if ((num < 0) || (num > max - 1))
    {
        cout << "������ ������ϴ�." << endl;
        return;
    }

    if (base[num] == 0) //���� �л��� �����Ǿ����� Ȯ��
    {
        cout << num << "�� �л��� �������� �ʾҽ��ϴ�." << endl;
        return;
    }

    Stu* stu = base[num];
    cout << stu << endl;
}

void stuManager::SearchStuByName()
{
    char name[20];
    char buf[50];
    //buf�� ���ڿ��� ����
    sprintf_s(buf, "�˻��� �л� �̸��� �Է��ϼ���. (0~%d)",
        max - 1);

    strcpy_s(name, sizeof(name), wbglbal::getstr(buf));

    for (int i = 0; i < max; i++)
    {
        if (base[i]) //���� �л��� �����Ǿ����� Ȯ��
        {
            if (strcmp(base[i]->GetName(), name) == 0)
            {
                cout << base[i] << endl;
                return;
            }
        }
    }
    cout << name << " �л��� �������� �ʾҽ��ϴ�." << endl;
}

void stuManager::UpdateStu()
{
    char name[20];
    char buf[50];
    //buf�� ���ڿ��� ����
    sprintf_s(buf, "������ �л� �̸��� �Է��ϼ���. (0~%d)", max - 1);
    strcpy_s(name, sizeof(name), wbglbal::getstr(buf));

    for (int i = 0; i < max; i++)
    {
        if (base[i]) //���� �л��� �����Ǿ����� Ȯ��
        {
            if (strcmp(base[i]->GetName(), name) == 0)
            {
                Stu* stu = base[i];
                //���� �Է� ó��
                int c = wbglbal::getnum("C�������");
                int cpp = wbglbal::getnum("C++�������");
                int java = wbglbal::getnum("JAVA�������");
                stu->SetJumsu(c, cpp, java);    //�ڽ��� �ɹ������� ������ �ɹ� �Լ��� ���ؼ�

                cout << "�����Ǿ����ϴ�." << endl;

                return;
            }
        }
    }
    cout << name << " �������� �ʾҽ��ϴ�." << endl;
}