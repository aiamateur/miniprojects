#include <iostream>
using namespace std;

class Date
{
  private:
  int day;
  int month;
  int year;
  public:
  void getData()
  {
      char slash;
      cout << "Enter Date" << endl;
      cin >> day >> slash >> month >> slash >> year;
  }
  void showData()
  {
      char slash = '/';
      cout << day << slash << month << slash << year << endl;
  }
};

class Employee
{
    private:
    enum etype {laborer, secretary, manager, accountant, executive, researcher};
    int eNumber;
    float eCompensation;
    etype eType;
    Date eDate;
    public:
    void getData()
    {
        char empTypeFirst;
        char slash;
        cout << "Enter Employee Number " << endl;
        cin >> eNumber;
        cout << "Enter Employee Compensation " << endl;
        cin >> eCompensation;
        cout << "Enter employee type (first letter only)" << endl;
        cout << "laborer, secretary, manager, accountant, executive, researcher" << endl;
        cin >> empTypeFirst;
        switch(empTypeFirst)
        {
          case 'l':
              eType = laborer;
              break;
          case 's':
              eType = secretary;
              break;
          case 'm':
              eType = manager;
              break;
          case 'a':
              eType = accountant;
              break;
          case 'e':
              eType = executive;
              break;
          case 'r':
              eType = researcher;
              break;
        }
        cout << "Enter employee start date" << endl;
        eDate.getData();
    }
    void showData()
    {
        string eTypeStr;
        cout << "Employee Number " << eNumber << endl;
        cout << "Employee Compensation " << eCompensation << endl;
        switch(eType)
        {
          case laborer:
              eTypeStr = "laborer";
              break;
          case secretary:
              eTypeStr = "secretary";
              break;
          case manager:
              eTypeStr = "manager";
              break;
          case accountant:
              eTypeStr = "accountant";
              break;
          case executive:
              eTypeStr = "executive";
              break;
          case researcher:
              eTypeStr = "researcher";
              break;
        }
        cout << "Employee Type is " << eTypeStr << endl;
        cout << "Employee start date is " << endl;
        eDate.showData();
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
