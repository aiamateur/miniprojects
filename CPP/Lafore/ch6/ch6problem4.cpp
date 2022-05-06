#include <iostream>
using namespace std;

class Employee
{
    private:
    int eNumber;
    float eCompensation;
    public:
    void getData()
    {
        cout << "Enter Employee Number " << endl;
        cin >> eNumber;
        cout << "Enter Employee Compensation " << endl;
        cin >> eCompensation;
    }
    void showData()
    {
        cout << "Employee Number " << eNumber << " Employee Compensation " << eCompensation << endl;
    }
};

int main()
{
    Employee e1, e2, e3;
    e1.getData();
    e2.getData();
    e3.getData();
    e1.showData();
    e2.showData();
    e3.showData();
    return 0;
}
