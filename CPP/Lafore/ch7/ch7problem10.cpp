
#include <iostream>

using namespace std;

class Safearay
{
    private:
    enum {LIMIT = 10 };
    int iarray[LIMIT][LIMIT];
    int nRows, nCols;;

    public:
    Safearay(int m, int n)
    {
        nRows = m;
        nCols = n;
    }

    void putel(int index1, int index2, int element)
    {
        if((index1 >=0) && (index1 <= (nRows - 1)) && (index2 >= 0) && (index2 <= (nCols - 1)))
        {
            iarray[index1][index2] = element;
        }
    }

    int getel(int index1, int index2)
    {
        if((index1 >=0) && (index1 <= (nRows - 1)) && (index2 >= 0) && (index2 <= (nCols - 1)))
        {
            return iarray[index1][index2];
        }else{
            cout << "Enter a valid index" << endl;
            return 0;
        }
    }
};

int main()
{

    Safearay sa1(3, 4);
    sa1.putel(2, 3, 12345);
    int temp = sa1.getel(5, 3);
    cout << temp << endl;

    //Question: What should sa1.getel(5, 3) return if it does not enter the if statement in getel method?

    return 0;
}
