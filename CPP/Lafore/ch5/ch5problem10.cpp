#include <iostream>
using namespace std;

int countGlobal = 0;

void functionGlobal();
void functionStatic();

int main()
{
    for(int i = 0 ; i < 15; i ++)
    {
        functionGlobal();
    }
    for(int i = 0 ; i < 20; i ++)
    {
        functionStatic();
    }
    return 0;
}

void functionGlobal()
{
    countGlobal++;
    cout << "I functionGlobal have been called " << countGlobal << " times" << endl;
}

void functionStatic()
{
    static long countStatic = 0;

    countStatic++;
    cout << "I functionStatic have been called " << countStatic << " times" << endl;
}
