#include <iostream>

using namespace std;

class Int
{
    private:
    int someInt;
    public:
    void setInt()
    {
        someInt = 0;
    }
    void setInt(int i)
    {
        someInt = i;
    }
    void showInt()
    {
        cout << "The Int in this is " << someInt << endl;
    }
    Int addInt(Int iObj)
    {
        Int temp;
        temp.setInt(someInt + iObj.someInt);
        return temp;
    }

};

int main()
{
    Int iObj1, iObj2, iObj3;
    iObj1.setInt(1);
    iObj2.setInt(2);
    iObj3 = iObj1.addInt(iObj2);
    iObj3.showInt();
    return 0;
}
