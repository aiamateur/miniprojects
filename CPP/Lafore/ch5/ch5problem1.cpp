#include <iostream>

using namespace std;

float circarea(float);

int main()
{
    float radius;
    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    cout << "The area of the circle is " << circarea(radius) << endl;

    return 0;
}

float circarea(float radius)
{
    float area = 3.14159*radius*radius;
    return area;
}
