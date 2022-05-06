#include <iostream>
using namespace std;

struct Distance
{
  int feet;
  float inches;
};

struct Volume
{
  Distance length;
  Distance breadth;
  Distance height;
};

int main()
{
  Volume volRoom1 = {{3, 6}, {4, 7}, {5, 8}};
  float l = volRoom1.length.feet + volRoom1.length.inches/12;
  float b = volRoom1.breadth.feet + volRoom1.breadth.inches/12;
  float h = volRoom1.height.feet + volRoom1.height.inches/12;
  float v = l*b*h;

  cout << "Volume of the room is " << v << "\n";
  return 0;
}
