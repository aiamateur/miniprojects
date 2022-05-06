#include <iostream>


using namespace std;




int main()
{
    float initialAmount;
    int numYears;
    float interestRate;
    float amount;

    cout << "Enter initial amount" << endl;
    cin >> initialAmount;
    cout << "Enter number of years" << endl;
    cin >> numYears;
    cout << "Enter interest rate(percent per year)" << endl;
    cin >> interestRate;
    amount = initialAmount;

    for(int i = 1; i <= numYears ; i++)
    {
        float iAmount = amount + amount*interestRate*0.01;
        cout << "At the end of year " << i << " you have " << amount << " + (" << amount << " * " << interestRate*0.01 << "), " << "which is " << iAmount << endl;
        amount = iAmount;

    }
        cout << "At the end of " << numYears << " years you will have " << amount << " dollars" << endl;


    return 0;
}
