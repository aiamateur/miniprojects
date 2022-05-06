
#include <iostream>

using namespace std;

double power(double, int=2);

int main()
{
    float n;
    int p;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "Enter p" << endl;
    cin >> p;
    cout << n << " power  " << p << " is " << power(n, p) << endl;
    cout << power(3) << endl;

    return 0;
}

double power(double n, int p)
{
    if (p > 0)
    {
       return n*power(n, p-1);
    }else{

       return 1;
    }
}
