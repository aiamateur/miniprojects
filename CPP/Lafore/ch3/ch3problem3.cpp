#include <iostream>

using namespace std;


#include <conio.h>

int main()
{
    int number = 0;
    for(int i = 0 ; i < 6 ; i++)
    {
        char c = getche();
        int intc = c - 48;
        number = number * 10 + intc;
    }
    
    cout << number << endl;

    return 0;
}
