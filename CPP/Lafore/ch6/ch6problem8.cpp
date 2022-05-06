#include <iostream>
using namespace std;

class Counter
{
    private:
    static int count;
    int serialNumber;


    public:
    Counter()
    {
        count = count + 1;
        serialNumber = count;
    }

    void getObjectInfo()
    {
        cout << "I am object number " << serialNumber << endl;
    }

};

int Counter::count = 0;

int main()
{
    Counter c1, c2, c3;
    c1.getObjectInfo();
    c2.getObjectInfo();
    c3.getObjectInfo();
    return 0;
}
