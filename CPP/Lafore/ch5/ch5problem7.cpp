#include <iostream>

using namespace std;

/*Function Overloading. Notice how the function names
are same but the argument numbers/argument types are
different (sometimes the return types are different too).
Group of functions that have the same name but do
different jobs = Function Overloading
Overloaded functions can have different return types
but they cannot differ only by return type(How will
the compiler differentiate the function calls based
on return type alone, a.k.a, how will it know
which function to call? that is not possible)*/


double power(double, int=2);
long power(char, int=2);
long power(int, int=2);
long power(long, int=2);
double power(float, int=2);

int main()
{
    double n = 2.5;
    char c = 'a';
    int n1 = 4;
    long n2 = 5;
    float n3 = 3.6;
    int p = 3;

    cout << n << " power  " << p << " is " << power(n, p) << endl;
    cout << c << " power  " << p << " is " << power(c, p) << endl;
    cout << n1 << " power " << p << " is " << power(n1, p) << endl;
    cout << n2 << " power " << p << " is " << power(n2, p) << endl;
    cout << n3 << " power " << p << " is " << power(n3, p) << endl;
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

long power(char c, int p)
{
    if (p > 0)
    {
       return c*power(c, p-1);
    }else{

       return 1;
    }
}

long power(int  n, int p)
{
    if (p > 0)
    {
       return n*power(n, p-1);
    }else{

       return 1;
    }
}


long power(long  n, int p)
{
    if (p > 0)
    {
       return n*power(n, p-1);
    }else{

       return 1;
    }
}

double power(float  n, int p)
{
    if (p > 0)
    {
       return n*power(n, p-1);
    }else{

       return 1;
    }
}
