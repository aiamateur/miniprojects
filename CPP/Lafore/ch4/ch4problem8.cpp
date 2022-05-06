#include <iostream>

using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

int main()
{
    Fraction f1, f2, f3;
    char over;
    cout << "Enter first fraction" << endl;
    cin >> f1.numerator >> over >> f1.denominator;
    cout << "Enter second fraction" << endl;
    cin >> f2.numerator >> over >> f2.denominator;
    f3.numerator = f1.numerator*f2.denominator + f2.numerator*f1.denominator ;
    f3.denominator = f1.denominator*f2.denominator;
    cout << "Sum : " << f3.numerator <<"/" << f3.denominator << endl;
    return 0;
}
