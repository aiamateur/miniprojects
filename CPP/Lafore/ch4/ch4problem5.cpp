#include <iostream>
using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

int main()
{
    Date d1;
    char slash;
    cout << "Enter Date" << endl;
    cin >> d1.month >> slash >> d1.day >> slash >> d1.year;
    cout << d1.month << slash << d1.day << slash << d1.year << endl;
    return 0;
}
