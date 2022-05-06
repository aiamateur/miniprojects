#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

float mstold(char money[])
{
    int len = strlen(money);
    char cmoney[len];
    int i = 0;
    int j = 0;
    while(i < len)
    {
        switch(money[i])
        {
            case '.':
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            cmoney[j] = money[i];
            j++;
            break;
        }
        i++;
    }
    cmoney[j] = '\0';
    float fmoney = atof(cmoney);
    return fmoney;
}

int main()
{
    const int MAX = 100;
    char money[MAX];
    char command;
    do
    {
      cout << "Enter money" << endl;
      cin.get(money, MAX);
      float fmoney = mstold(money);
      cout << fmoney << endl;
      cout << "Do you want to continue? (y/n) " << endl;
      cin >> command;
    }while(command != 'n');


    return 0;
}
