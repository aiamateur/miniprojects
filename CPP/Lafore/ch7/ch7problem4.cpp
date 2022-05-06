#include <iostream>
using namespace std;

int maxint(int intArray[], int numElements);

int main()
{
    const int MAX = 100;
    int iArray[MAX];
    int nElements = 0;
    char command;

    do
    {
       cout << "Enter integer : " << endl;
       cin >> iArray[nElements];
       nElements = nElements + 1;
       if(nElements == MAX) break;
       cout << "Do you want to continue? (y/n) " << endl;
       cin >> command;
    }while(command != 'n');

    int mIndex = maxint(iArray, nElements);
    cout << "The largest element is " << iArray[mIndex] << " at index " << mIndex << endl;
    return 0;
}

int maxint(int intArray[], int numElements)
{
    int maxIndex = 0;
    for(int i = 0; i < numElements; i++)
    {
        if(intArray[i] > intArray[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}
