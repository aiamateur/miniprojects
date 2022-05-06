
#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

Time addTime(Time, Time);
long time_to_secs(Time);
Time secs_to_time(long);

int main()
{
    Time t1, t2, t3;
    cout << "Enter hours" << endl;
    cin >> t1.hours;
    cout << "Enter minutes" << endl;
    cin >> t1.minutes;
    cout << "Enter seconds" << endl;
    cin >> t1.seconds;
    cout << "Enter hours" << endl;
    cin >> t2.hours;
    cout << "Enter minutes" << endl;
    cin >> t2.minutes;
    cout << "Enter seconds" << endl;
    cin >> t2.seconds;
    t3 = addTime(t1, t2);

    cout << t3.hours << " " << t3.minutes << " " << t3.seconds << endl;
    return 0;
}

long time_to_secs(Time t)
{
    return t.hours*3600 + t.minutes*60 + t.seconds;
}

Time secs_to_time(long totalSeconds)
{
    Time t;
    long secondsInHour = 3600;
    long secondsInMinute = 60;
    t.hours = totalSeconds/secondsInHour; //Stores integral division value in t.hours
    t.minutes = (totalSeconds % secondsInHour)/secondsInMinute;
    t.seconds = (totalSeconds % secondsInHour) % secondsInMinute;
    return t;
}

Time addTime(Time t1, Time t2)
{
    long totalSecs = time_to_secs(t1) + time_to_secs(t2);
    Time t3 = secs_to_time(totalSecs);
    return t3;
}
