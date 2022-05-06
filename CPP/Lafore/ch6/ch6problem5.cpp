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

int main()
{
    Date d1;
    d1.getData();
    d1.showData();
    return 0;
}
