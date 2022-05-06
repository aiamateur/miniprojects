#include <iostream>
using namespace std;

class Time
{
    private:
    int hours;
    int minutes;
    int seconds;

    public:
    Time() : hours(0), minutes(0), seconds(0)
    {

    }
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
    {

    }
    void getTime() const
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    void addTime(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        if(seconds >= 60)
        {
            seconds =  seconds - 60;
            minutes = minutes + 1;
        }
        minutes = minutes + t1.minutes + t2.minutes;
        if(minutes >= 60)
        {
            minutes = minutes - 60;
            hours = hours + 1;
        }
        hours = hours + t1.hours + t2.hours;
    }

};

int main()
{
    const Time t1(2, 30, 50);
    const Time t2(6, 40, 30);
    Time t3;
    t3.addTime(t1, t2);
    t3.getTime();
    return 0;
}
