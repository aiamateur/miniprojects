#include <iostream>


using namespace std;




int main()
{
    float initialAmount;
    float finalAmount;
    float interestRate;
    int numYears;
    float amount;

    cout << "Enter initial amount" << endl;
    cin >> initialAmount;
    cout << "Enter final amount you would like" << endl;
    cin >> finalAmount;
    cout << "Enter interest rate(percent per year)" << endl;
    cin >> interestRate;
    amount = initialAmount;

    while(amount < finalAmount)
    {
        numYears++;
        amount = amount + amount*interestRate*0.01;
    }

    cout << "You will have your final amount in " << numYears << " years" << endl;

    return 0;
}
