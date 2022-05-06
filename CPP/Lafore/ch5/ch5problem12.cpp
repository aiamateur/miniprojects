#include <iostream>
using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

Fraction fadd(Fraction, Fraction);
Fraction fsub(Fraction, Fraction);
Fraction fmul(Fraction, Fraction);
Fraction fdiv(Fraction, Fraction);

int main()
{
    Fraction f1, f2, f3;
    char over;
    char operation;
    char command;
    do
    {
      cout << "Enter first fraction" << endl;
      cin >> f1.numerator >> over >> f1.denominator;
      cout << "Enter operation" << endl;
      cin >> operation;
      cout << "Enter second fraction" << endl;
      cin >> f2.numerator >> over >> f2.denominator;
      switch(operation)
      {
            case '+':
            f3 = fadd(f1, f2);
            break;
            case '-':
            f3 = fsub(f1, f2);
            break;
            case '*':
            f3 = fmul(f1, f2);
            break;
            case '/':
            f3 = fdiv(f1, f2);
            break;
      }
      cout << "Answer = " << f3.numerator << "/" << f3.denominator << endl;
      cout << "Do another? (y/n)" << endl;
      cin >> command;
    }while(command != 'n');

    return 0;
}


Fraction fadd(Fraction f1, Fraction f2)
{
    Fraction f3;
    f3.numerator = f1.numerator*f2.denominator + f1.denominator*f2.numerator;
    f3.denominator = f1.denominator*f2.denominator;
    return f3;
}

Fraction fsub(Fraction f1, Fraction f2)
{
    Fraction f3;
    f3.numerator = f1.numerator*f2.denominator - f1.denominator*f2.numerator;
    f3.denominator = f1.denominator*f2.denominator;
    return f3;
}

Fraction fmul(Fraction f1, Fraction f2)
{
    Fraction f3;
    f3.numerator = f1.numerator*f2.numerator;
    f3.denominator = f1.denominator*f2.denominator;
    return f3;
}

Fraction fdiv(Fraction f1, Fraction f2)
{
    Fraction f3;
    f3.numerator = f1.numerator*f2.denominator;
    f3.denominator = f1.denominator*f2.numerator;
    return f3;
}
