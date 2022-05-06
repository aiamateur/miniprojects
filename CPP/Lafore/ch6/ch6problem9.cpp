#include <iostream>

using namespace std;

class Fraction
{
    private:
    int numerator;
    int denominator;

    public:
    Fraction(): numerator(0), denominator(1)
    {

    }

    void setFraction()
    {
       char over;
       cout << "Enter fraction" << endl;
       cin >> numerator >> over >> denominator;
    }

    void getFraction()
    {
        char over = '/';
        cout << numerator << over << denominator << endl;
    }

    void addFraction(Fraction f1, Fraction f2)
    {
        numerator = f1.numerator*f2.denominator + f2.numerator*f1.denominator ;
        denominator = f1.denominator*f2.denominator;

    }
};

int main()
{
    Fraction f1, f2, f3;
    char command;
    do
    {
       f1.setFraction();
       f2.setFraction();
       f3.addFraction(f1, f2);
       f3.getFraction();
       cout << "Do you want to continue?(y/n)" << endl;
       cin >> command;
    }while(command != 'n');

    return 0;
}
