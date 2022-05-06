#include <iostream>

using namespace std;

class Safearay
{
    private:
    enum {LIMIT = 10 };
    int iarray[LIMIT];

    public:
    Safearay()
    {

    }

    void putel(int index, int element)
    {
        if((index >=0) && (index <= (LIMIT - 1)))
        {
            iarray[index] = element;
        }
    }

    int getel(int index)
    {
        if((index >=0) && (index <= (LIMIT - 1)))
        {
            return iarray[index];
        }
    }
};

int main()
{
   /* A small experiment to demonstrate C++ does not check
   array bounds while inserting or accessing array elements
    int array[3];

    array[4] = 20;

    cout << array[4] << endl;


    for(int i = 0; i < 10; i++)
    {
        array[i] = i*20;
    }

    for(int j = 0; j < 20; j++)
    {
        cout << array[j] << endl;
    } */

    Safearay sa1;
    int temp = 0;
    sa1.putel(20, 12345);
    temp = sa1.getel(20);
    cout << temp << endl;

    //Question: What is sa1.getel(20) returning? It does not go inside the "if" statement

    return 0;
}
