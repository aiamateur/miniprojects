#include <iostream>
using namespace std;

struct phone
{
  int areaCode;
  int exchange;
  int number;
};

int main()
{
  phone phone1; //212 767 8900
  phone phone2; //415 555 1212
  phone1.areaCode = 212;
  phone1.exchange = 767;
  phone1.number = 8900;

  cout << "Enter Area Code";
  cin >> phone2.areaCode;

  cout << "Enter Exchange";
  cin >> phone2.exchange;

  cout << "Enter number";
  cin >> phone2.number;

  cout << "My number is (" << phone1.areaCode <<")";
  cout << " " << phone1.exchange;
  cout << " " << phone1.number << "\n";

  cout << "Your number is (" << phone2.areaCode <<")";
  cout << " " << phone2.exchange;
  cout << " " << phone2.number << "\n";

  return 0;
}
