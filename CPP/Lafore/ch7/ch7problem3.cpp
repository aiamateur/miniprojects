#include <iostream>
using namespace std;

class Distance
{
    private:
    int feet;
    float inches;

    public:
    Distance() : feet(0), inches(0.0)
    {

    }

    Distance(int ft, float in) : feet(ft), inches(in)
    {

    }

    void getDistance()
    {
       cout << "Enter feet "  << endl;
       cin >> feet;
       cout << "Enter inches " << endl;
       cin >> inches;
    }

    void showDistance()
    {
       cout << feet << "\'-" << inches << '\"' << endl;
    }

    void addDistance(Distance d2, Distance d3)
    {
       inches = d2.inches + d3.inches;
       feet = 0;

       if(inches >= 12)
       {
           inches = inches - 12;
           feet = feet + 1;
       }

       feet = feet + d2.feet + d3.feet;
    }

    void divDistance(Distance d2, int divisor)
    {
        float fltfeet = d2.feet + (d2.inches/12.0);
        fltfeet = fltfeet/divisor;
        feet = int(fltfeet);
        inches = (fltfeet - feet)*12.0;
    }
};

int main()
{
    const int MAX = 100;
    Distance distArray[MAX];
    Distance resultAccumulator;
    int numDistances = 0;
    char command;

    do
    {
      Distance d;
      d.getDistance();
      distArray[numDistances] = d;
      numDistances = numDistances + 1;
      resultAccumulator.addDistance(resultAccumulator, d);
      if(numDistances == MAX) break;
      cout << "Do you want to continue? (y/n) " << endl;
      cin >> command;
    }while(command != 'n');

    resultAccumulator.divDistance(resultAccumulator, numDistances);
    resultAccumulator.showDistance();

    return 0;
}
