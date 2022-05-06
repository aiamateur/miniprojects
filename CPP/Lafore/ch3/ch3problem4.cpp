#include <iostream>
using namespace std;




int main()
{
    float num1;
    float num2;
    char operation;
    char command;

    do
    {
        cout << "Enter first number" << endl;
        cin >> num1;
        cout << "Enter operation" << endl;
        cin >> operation;
        cout << "Enter second number" << endl;
        cin >> num2;

        switch(operation)
        {
            case '+':
            cout << "Answer = " << num1 + num2 << endl;
            break;
            case '-':
            cout << "Answer = " << num1 - num2 << endl;
            break;
            case '*':
            cout << "Answer = " << num1 * num2 << endl;
            break;
            case '/':
            cout << "Answer = " << num1 / num2 << endl;
            break;
        }
        cout << "Do another? (y/n)" << endl;
        cin >> command;

    }while ( command != 'n');

    return 0;
}
