//02��
/************************************************************
  02. �Ʒ� �ڵ尡 ����� �� �ִ� Ŭ���� ����
      Date Ŭ���� : ��, ��, ���� �ɹ� ������ ������ �ִ�.
      Time Ŭ���� : ��, ��, �ʸ� �ɹ� ������ ������ �ִ�.
      Now  Ŭ���� : ���� 2��  Ŭ������ ���� ����Ѵ�.
       ��Ʈ)  class Now : public Time, public Now
               Now�� �����ڿ��� ��� �θ��� ���� ����� ȣ��
*************************************************************/
#include <iostream>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int date;

public:
    Date(int _year, int _month, int _date)
    {
        year = _year;
        month = _month;
        date = _date;
    }

public:
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDate() { return date; }
};

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int _hour, int _minute, int _second)
    {
        hour = _hour;
        minute = _minute;
        second = _second;
    }

public:
    int getHour() { return hour; }
    int getMinute() { return minute; }
    int getSecond() { return second; }
};

class Now : public Date , public Time
{
public:
    Now(int _year, int _month, int _date, int _hour, int _minute, int _second)
        :Date(_year, _month, _date), Time(_hour, _minute, _second)
    {
    }

public:
    void OutNow()
    {
        cout << getYear() << "-" << getMonth() << "-" << getDate()<<" ";
        cout << getHour() << ": " << getMinute() << ": " << getSecond() << endl;
    }
};


void main()
{
     Now N(2009,5,10,12,30,58);
     N.OutNow();		// ��¥ �ð� ��� ex)"2020-05-22 09:10:25"
}
