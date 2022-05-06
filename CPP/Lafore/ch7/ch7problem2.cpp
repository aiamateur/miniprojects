#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
    string eName;
    long eNumber;

    public:
    Employee()
    {

    }

    void getData()
    {
        cout << "Enter Employee Name" << endl;
        cin >> eName;
        cout << "Enter Employee Number" << endl;
        cin >> eNumber;
    }

    void putData()
    {
        cout << "Employee Name : " << eName << endl;
        cout << "Employee Number : " << eNumber << endl;
    }

};

int main()
{
    const int MAX = 100;
    Employee empArray[MAX];
    int numEmployees = 0;
    char command;

    do{
        empArray[numEmployees].getData();
        numEmployees = numEmployees + 1;
        cout << "Do you want to continue?(y/n) " << endl;
        cin >> command;
    }while(command != 'n');

    for(int i = 0; i < numEmployees; i++)
    {
        empArray[i].putData();
    }

    return 0;
}
