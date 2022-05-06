#include <iostream>
using namespace std;

class Angle
{
    private:
    int degrees;
    float minutes;
    char direction;

    public:

    Angle(int deg, float min, char dir) : degrees(deg), minutes(min), direction(dir)
    {

    }

    void getAngle()
    {
        cout << "Enter degrees " << endl;
        cin >> degrees;
        cout << "Enter minutes " << endl;
        cin >> minutes;
        cout << "Enter direction " << endl;
        cin >> direction;
    }

    void showAngle()
    {
        cout << degrees << '\xF8' << minutes << "'" << direction << endl;
    }

};

class Ship
{
    private:
    static int count;
    int serialNumber;
    Angle latitude = Angle(0, 0, 'N');
    Angle longitude = Angle(0, 0, 'E');

    public:
    Ship()
    {
        count = count + 1;
        serialNumber = count;
    }

    void setShipInfo()
    {
        cout << "Enter ship latitude " << endl;
        latitude.getAngle();
        cout << "Enter ship longitude " << endl;
        longitude.getAngle();
    }

    void getShipInfo()
    {
        cout << "I am ship number " << serialNumber << endl;
        cout << "The position of the ship is " << endl;
        latitude.showAngle();
        longitude.showAngle();
    }

};

int Ship::count = 0;

int main()
{
    Ship s1, s2, s3;
    s1.setShipInfo();
    s2.setShipInfo();
    s3.setShipInfo();
    s1.getShipInfo();
    s2.getShipInfo();
    s3.getShipInfo();
    return 0;
}
