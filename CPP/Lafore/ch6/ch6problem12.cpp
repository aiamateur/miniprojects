#include <iostream>
#include <iomanip>
using namespace std;

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
        cout << numerator << over << denominator;
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
  int denominator;
  cout << "Enter denominator" << endl;
  cin >> denominator;

  cout << " " << setw(5);

  for(int col = 1; col < denominator; col++)
  {
      cout << setw(5) << col << '/' << denominator;
  }

  cout << endl;

  for(int row = 1; row < denominator; row++)
  {
      cout << row << '/' << denominator;
      Fraction f1(row, denominator);
      for(int col = 1; col < denominator; col++)
      {
          Fraction f2(col, denominator);
          Fraction f3(0, 1);
          f3.fmul(f1, f2);
          cout << setw(5);
          f3.getFraction();
      }
      cout << endl;
  }
  return 0;
}
