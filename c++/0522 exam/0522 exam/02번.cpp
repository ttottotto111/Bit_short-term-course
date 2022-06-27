//02번
/************************************************************
  02. 아래 코드가 실행될 수 있는 클래스 구현
      Date 클래스 : 년, 월, 일을 맴버 변수로 가지고 있다.
      Time 클래스 : 시, 분, 초를 맴버 변수로 가지고 있다.
      Now  클래스 : 위의 2개  클래스를 다중 상속한다.
       힌트)  class Now : public Time, public Now
               Now의 생성자에서 모든 부모의 생성 방법을 호출
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
     N.OutNow();		// 날짜 시간 출력 ex)"2020-05-22 09:10:25"
}
