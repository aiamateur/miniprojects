#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

void swap(Time&, Time& );

int main()
{
    Time a = {10, 20, 30};
    Time b = {1, 2, 3};

    cout << " a is " << a.hours << " " << a.minutes << " " << a.seconds << endl;
    cout << " b is " << b.hours << " " << b.minutes << " " << b.seconds << endl;
    swap(a, b);
    cout << " a is " << a.hours << " " << a.minutes << " " << a.seconds << endl;
    cout << " b is " << b.hours << " " << b.minutes << " " << b.seconds << endl;
}

void swap(Time& n1, Time& n2)
{
    Time temp = n1;
    n1 = n2;
    n2 = temp;
}
