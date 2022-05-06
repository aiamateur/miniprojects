#include <iostream>

using namespace std;

long hms_to_secs(int, int, int);

int main()
{
    int hours;
    int minutes;
    int seconds;
    char command;

    do{
        cout << "Enter hours" << endl;
        cin >> hours;
        cout << "Enter minutes" << endl;
        cin >> minutes;
        cout << "Enter seconds" << endl;
        cin >> seconds;
        cout << "Total number of seconds are " << hms_to_secs(hours, minutes, seconds) << endl;
        cout << "Do you want to continue? (y/n)"  << endl;
        cin >> command;

    }while (command != 'n');

    return 0;
}

long hms_to_secs(int h, int m, int s)
{
    long totalSeconds = h*60*60 + m*60 + s;
    return totalSeconds;
}
