*******************************************************************************/
#include <iostream>
using namespace std;

class TollBooth
{
    private:
    unsigned int totalCars;
    double totalTollAmount;
    public:
    TollBooth() : totalCars(0), totalTollAmount(0)
    {

    }
    void payingCar()
    {
        totalCars = totalCars + 1;
        totalTollAmount = totalTollAmount + 0.50;
    }
    void nopayCar()
    {
        totalCars = totalCars + 1;
    }
    void display() const
    {
        cout << "Total Cars " << totalCars << endl;
        cout << "Total toll collected " << totalTollAmount << endl;
    }

};

int main()
{
    TollBooth tb1;
    char command;
    const int ESC = 27;
    cout << "Enter Paying car(p), Non paying car(n), or Display total and quit (ESC) " << endl;
    cin >> command;
    while(true)
    {
       if(command == 'p')
       {
           tb1.payingCar();
       }else if(command == 'n')
       {
           tb1.nopayCar();
       }else if (command == ESC)
       {
           tb1.display();
           exit(0);
       }
       cout << "Enter Paying car(p), Non paying car(n), or Display total and quit (ESC) " << endl;
       cin >> command;
    }
    return 0;
}
