#include <iostream>
using namespace std;

struct Employee
{
    int eNumber;
    float eCompensation;

};

int main()
{
    Employee e1, e2, e3;
    cout << "Enter employee number" << endl;
    cin >> e1.eNumber;
    cout << "Enter compensation" << endl;
    cin >> e1.eCompensation;
    cout << "Enter employee number" << endl;
    cin >> e2.eNumber;
    cout << "Enter compensation" << endl;
    cin >> e2.eCompensation;
    cout << "Enter employee number" << endl;
    cin >> e3.eNumber;
    cout << "Enter compensation" << endl;
    cin >> e3.eCompensation;
    cout << "Employee Information" << endl;
    cout << "Employee Number " << e1.eNumber << " Employee Compensation " << e1.eCompensation << endl;
    cout << "Employee Number " << e2.eNumber << " Employee Compensation " << e2.eCompensation << endl;
    cout << "Employee Number " << e3.eNumber << " Employee Compensation " << e3.eCompensation << endl;

    return 0;
}
