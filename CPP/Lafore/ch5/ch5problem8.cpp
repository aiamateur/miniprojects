#include <iostream>
using namespace std;

void swap(int&, int& );

int main()
{
    int a = 10;
    int b = 20;

    cout << " a is " << a << " b is " << b << endl;
    swap(a, b);
    cout << " a is " << a << " b is " << b << endl;
    return 0;
}

void swap(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
