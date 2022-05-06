#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int resultNum1;
    int resultDen1;
    char over;
    char operation;
    char command;
    do
    {
      cout << "Enter first fraction" << endl;
      cin >> a >> over >> b;
      cout << "Enter operation" << endl;
      cin >> operation;
      cout << "Enter second fraction" << endl;
      cin >> c >> over >> d;
      switch(operation)
      {
            case '+':
            resultNum1 = a*d + b*c;
            resultDen1 = b*d;
            break;
            case '-':
            resultNum1 = a*d - b*c;
            resultDen1 = b*d;
            break;
            case '*':
            resultNum1 = a*c;
            resultDen1 = b*d;
            break;
            case '/':
            resultNum1 = a*d;
            resultDen1 = b*c;
            break;
      }
      cout << "Answer = " << resultNum1 << "/" << resultDen1 << endl;
      cout << "Do another? (y/n)" << endl;
      cin >> command;
    }while(command != 'n');

    return 0;
}
