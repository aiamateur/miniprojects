#include <iostream>
#include <cmath>
using namespace std;

class Fraction
{
    private:
    int numerator;
    int denominator;

    public:
    Fraction() : numerator(0), denominator(1)
    {

    }

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
    const int MAX = 100;
    Fraction fracArray[MAX];
    Fraction resultAccumulator(0, 1);
    int numFractions = 0;
    char command;

    do
    {
      Fraction f(0, 1);
      f.setFraction();
      fracArray[numFractions] = f;
      numFractions = numFractions + 1;
      resultAccumulator.fadd(resultAccumulator, f);
      if(numFractions == MAX) break;
      cout << "Do you want to continue? (y/n) " << endl;
      cin >> command;
    }while(command != 'n');

    resultAccumulator.fdiv(resultAccumulator, Fraction(numFractions, 1));
    resultAccumulator.getFraction();

    return 0;
}
