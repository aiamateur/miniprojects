#include <iostream>

using namespace std;

void zeroSmaller(int&, int&);

int main()
{
     int num1 = 4;
     int num2 = 5;
     cout << "Number 1 is " << num1 << " Number 2 is " << num2 << endl;
     zeroSmaller(num1, num2);
     cout << "Number 1 is " << num1 << " Number 2 is " << num2 << endl;
     return 0;
}

void zeroSmaller(int& n1, int& n2)
{
    if (n1 > n2)
    {
       n2 = 0;
    }else if (n2 > n1)
    {
       n1 = 0;
    }
}
