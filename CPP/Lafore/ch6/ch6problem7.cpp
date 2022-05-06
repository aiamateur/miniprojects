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

int main()
{
    Angle a1(45, 59, 'E');
    char command;
    do
    {
        a1.getAngle();
        a1.showAngle();
        cout << "Enter Continue(c) or Quit(q)" << endl;
        cin >> command;

    }while( command != 'q');

    return 0;
}
