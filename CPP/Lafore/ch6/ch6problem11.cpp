
#include <iostream>
#include <cmath>
using namespace std;

class Fraction
{
    private:
    int numerator;
    int denominator;

    public:
    Fraction(int num, int den) : numerator(num), denominator(den)
    {

    }

    void setFraction()
    {
        cout << "Enter numerator of fraction" << endl;
        cin >> numerator;
        cout << "Enter denominator of fraction" << endl;
        cin >> denominator;
    }

    void getFraction()
    {
        char over = '/';
        cout << numerator << over << denominator << endl;
    }

    void fadd(Fraction f1, Fraction f2)
    {
       numerator = f1.numerator*f2.denominator + f1.denominator*f2.numerator;
       denominator = f1.denominator*f2.denominator;
       lowterms();
    }

    void fsub(Fraction f1, Fraction f2)
    {
       numerator = f1.numerator*f2.denominator - f1.denominator*f2.numerator;
       denominator = f1.denominator*f2.denominator;
       lowterms();
    }

    void fmul(Fraction f1, Fraction f2)
    {
       numerator = f1.numerator*f2.numerator;
       denominator = f1.denominator*f2.denominator;
       lowterms();
    }

    void fdiv(Fraction f1, Fraction f2)
    {
       numerator = f1.numerator*f2.denominator;
       denominator = f1.denominator*f2.numerator;
       lowterms();
    }

    void lowterms();
};

void Fraction::lowterms()
{
    int tnumerator, tdenominator, gcd, temp;
    tnumerator = labs(numerator);
    tdenominator = labs(denominator);
    if(tdenominator == 0)
    {
        cout << "Illegal fraction. Division by zero" << endl;
        exit(1);
    }else if(tnumerator == 0)
    {
        numerator = 0;
        denominator = 1;
        return;
    }

    while(tnumerator != 0)
    {
        if(tnumerator < tdenominator)
        {
           temp = tnumerator;
           tnumerator = tdenominator;
           tdenominator = temp;
        }
        tnumerator = tnumerator - tdenominator;
    }
    gcd = tdenominator;
    numerator = numerator/gcd;
    denominator = denominator/gcd;
}

int main()
{
    Fraction f1(0, 1), f2(0, 1), f3(0, 1);
    char over;
    char operation;
    char command;
    do
    {
      cout << "Enter first fraction" << endl;
      f1.setFraction();
      cout << "Enter operation" << endl;
      cin >> operation;
      cout << "Enter second fraction" << endl;
      f2.setFraction();
      switch(operation)
      {
            case '+':
                f3.fadd(f1, f2);
                break;
            case '-':
                f3.fsub(f1, f2);
                break;
            case '*':
                f3.fmul(f1, f2);
                break;
            case '/':
                f3.fdiv(f1, f2);
                break;
      }
      cout << "Answer = " << endl;
      f3.getFraction();
      cout << "Do another? (y/n)" << endl;
      cin >> command;
    }while(command != 'n');

    return 0;
}
