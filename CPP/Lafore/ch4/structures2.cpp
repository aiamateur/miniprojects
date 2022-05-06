#include <iostream>
using namespace std;

struct point
{
  int x;
  int y;
};

int main()
{
  point point1;
  point point2;
  point point3;

  cout << "Enter point p1 x coordinate";
  cin >> point1.x;

  cout << "Enter point p1 y coordinate";
  cin >> point1.y;

  cout << "Enter point p2 x coordinate";
  cin >> point2.x;

  cout << "Enter point p2 y coordinate";
  cin >> point2.y;

  point3.x = point1.x + point2.x;
  point3.y = point1.y + point2.y;

  cout << "Coordinates for p1+ p2 are: " << point3.x << " " << point3.y  << "\n";  

  return 0;
}
