//accmanager.cpp
#include "accmanager.h"



accManager::accManager()
    :max(SetMax())
{
    //vector�� ũ�⸦ max������ �缳��
    //�׸��� ��� ������ ���� 0���� �ʱ�ȭ
    base.resize(max, 0);
}

accManager::~accManager()
{
    for (int i = 0; i < max; i++)
    {
        if (base[i] != 0) //���� ���°� ������ ������ Ȯ��
        {
            delete base[i];
        }
    }
}

int accManager::SetMax()
{
    return wbglbal::getnum("�ִ� ������ ������ ���� �Է��ϼ���");
}

void accManager::Run()
{
    int key = 0;
    while ((key = SelectMenu()) != ESC)
    {
        switch (key)
        {
        case F1: AddAccount(); break;
        case F2: RemoveAccount(); break;
        case F3: SearchAccountByNum(); break;
        case F4: SearchAccountByName(); break;
        case F5: UpdateInputAccount(); break;
        case F6: UpdateOutputAccount(); break;
        default: cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
        }
        wbglbal::pause();
    }

}

keydata accManager::SelectMenu()
{
    wbglbal::clrscr();
    ListAll();
    cout << "---------------------------------------------------" << endl;
    cout << "�޴� [ESC]:����" << endl;
    cout << "[F1]:���� �߰�       [F2]:���� ����  [F3]:���¹�ȣ�� �˻�" << endl;
    cout << "[F4]:�������� �˻� [F5]:�Ա�       [F6]:���" << endl;
    cout << "�޴��� �����ϼ���" << endl;
    return wbglbal::getkey();

}

void accManager::ListAll()
{
    for (int i = 0; i < max; i++)
    {
        cout << "[" << i << "] : ";
        Account* acc = base[i];
        if (acc)        //���� �л��� �����Ǿ����� Ȯ��
        {
            cout << acc;        //��¿�����������
        }
        cout << endl;
    }
}

void accManager::AddAccount()
{
    //[�����帧]
    //���������� �Է¹޴´�.
    //���尴ü�� �����Ѵ�. (���������� �̿��ؼ�)
    //�����Ѵ�. (���尴ü��)

    //[�����帧 ����]

    int accnumber;
    char name[20];

    char buf[50];
    sprintf_s(buf, "�߰��� ���� ��ȣ�� �Է��ϼ���. (0~%d)", max - 1);
    accnumber = wbglbal::getnum(buf);

    strcpy_s(name, sizeof(name), wbglbal::getstr("�̸��� �Է��ϼ���"));
    //=================================================================

    if ((accnumber <= 0) || (accnumber > max - 1))
    {
        cout << "������ ������ϴ�." << endl;

        return;
    }

    if (base[accnumber])
    {
        cout << "�̹� ������ �л��� �ֽ��ϴ�." << endl;
        return;
    }

    //=================================================================
    Account* acc = new Account(accnumber, name);
    base[accnumber] = acc;
    cout << "����Ǿ����ϴ�." << endl;

}

void accManager::RemoveAccount()
{
    int accnumber;

    char buf[50];
    //buf�� ���ڿ��� ����
    sprintf_s(buf, "������ �л� ��ȣ�� �Է��ϼ���. (0~%d)", max - 1);

    accnumber = wbglbal::getnum(buf);

    if ((accnumber <= 0) || (accnumber > max - 1))
    {
        cout << "������ ������ϴ�." << endl;
        return;
    }

    if (base[accnumber] == 0) //���� �л��� �����Ǿ����� Ȯ��
    {
        cout << "������ �л��� �����ϴ�." << endl;
        return;
    }

    delete base[accnumber];  //���� �ִ� �л����� ����

    //������ �����ּҰ��� 0���� �ʱ�ȭ 
    base[accnumber] = 0; //�ʱⰪ 0���� �ٽ� ����
}

void accManager::SearchAccountByNum()
{
    int accnumber = 0;
    char buf[50];
    //buf�� ���ڿ��� ����
    sprintf_s(buf, "�˻��� ���� ��ȣ�� �Է��ϼ���. (0~%d)", max - 1);
    accnumber = wbglbal::getnum(buf);

    if ((accnumber < 0) || (accnumber > max - 1))
    {
        cout << "������ ������ϴ�." << endl;
        return;
    }

    if (base[accnumber] == 0) //���� �л��� �����Ǿ����� Ȯ��
    {
        cout << accnumber << "�� ���´� �������� �ʾҽ��ϴ�." << endl;
        return;
    }

    Account* acc = base[accnumber];
    cout << acc << endl;
}

void accManager::SearchAccountByName()
{
    char name[20];
    char buf[50];
    //buf�� ���ڿ��� ����
    sprintf_s(buf, "�˻��� �� �̸��� �Է��ϼ���. (0~%d)", max - 1);

    strcpy_s(name, sizeof(name), wbglbal::getstr(buf));

    for (int i = 0; i < max; i++)
    {
        Account* acc = base[i];
        if (acc != NULL) //���� ���°� �����Ǿ����� Ȯ��
        {
            if (strcmp(acc->GetName(), name) == 0)
            {
                cout << base[i] << endl;
            }
        }
    }
}

void accManager::UpdateInputAccount()
{
    try
    {
        int accnumber = 0;
        char buf[50];
        //buf�� ���ڿ��� ����
        sprintf_s(buf, "�Ա��� ���� ��ȣ�� �Է��ϼ���. (0~%d)", max - 1);
        accnumber = wbglbal::getnum(buf);

        //�˻���� ��û 
        int idx = NumberToIdx(accnumber);   //<==  throw

        //�Ա� �Է� ó��
        Account* acc = base[idx];
        int money = wbglbal::getnum("�Աݾ�");
        acc->InputMoney(money);                 //<== throw
        cout << "�ԱݵǾ����ϴ�" << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
}

int accManager::NumberToIdx(int accnumber)
{
    for (int i = 0; i < max; i++)
    {
        Account* acc = base[i];
        if (acc != NULL) //���� �л��� �����Ǿ����� Ȯ��
        {
            if (acc->GetNumber() == accnumber)
            {
                return i;
            }
        }
    }
    throw "�ش� ���´� �����ϴ�.";
}

void accManager::UpdateOutputAccount()
{
    int accnumber = 0;
    char buf[50];
    //buf�� ���ڿ��� ����
    sprintf_s(buf, "����� ���� ��ȣ�� �Է��ϼ���. (0~%d)", max - 1);
    accnumber = wbglbal::getnum(buf);

    for (int i = 0; i < max; i++)
    {
        Account* acc = base[i];
        if (acc != NULL) //���� �л��� �����Ǿ����� Ȯ��
        {
            if (acc->GetNumber() == accnumber)
            {
                //�Ա� �Է� ó��
                int money = wbglbal::getnum("��ݾ�");
                acc->OutputMoney(money);
                cout << "��ݵǾ����ϴ�." << endl;
                return;
            }
        }
    }
    cout << "�ش� ���´� �����ϴ�." << endl;
}
