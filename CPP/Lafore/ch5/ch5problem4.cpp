#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance largerDistance(Distance, Distance);

int main()
{
    Distance d1, d2, d3;
    cout <<"Enter feet " << endl;
    cin >> d1.feet;
    cout <<"Enter inches " << endl;
    cin >> d1.inches;
    cout <<"Enter feet " << endl;
    cin >> d2.feet;
    cout <<"Enter inches " << endl;
    cin >> d2.inches;
    d3 = largerDistance(d1, d2);
    cout << "The larger distance is " << d3.feet << " feet " << d3.inches << " inches " << endl;

}

Distance largerDistance(Distance d1, Distance d2)
{
    float d1InInches = d1.feet*12 + d1.inches;
    float d2InInches = d2.feet*12 + d2.inches;
    if(d1InInches > d2InInches)
    {
        return d1;
    }else if (d2InInches > d1InInches)
    {
        return d2;
    }else
    {
        return d1;
    }

}
