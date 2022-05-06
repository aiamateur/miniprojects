#include <iostream>

using namespace std;


int main()
{
    int a;
    int b;
    int c;
    int d;
    char over;
    int sumNum;
    int sumDen;
    cout << "Enter first fraction" << endl;
    cin >> a >> over >> b;
    cout << "Enter second fraction" << endl;
    cin >> c >> over >> d;
    sumNum = a*d + c*b ;
    sumDen = b*d;
    cout << "Sum : " << sumNum <<"/" << sumDen << endl;
    return 0;
}
