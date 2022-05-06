#include <iostream>
using namespace std;

class Queue
{
    private:
    enum { LIMIT = 10 };
    int q[LIMIT];
    int head;
    int tail;

    public:
    Queue()
    {
        head = -1;
        tail = -1;
    }

    void put(int element)
    {
        if(((head == 0) && (tail == (LIMIT - 1))) || (tail == (head - 1)))
        {
            cout << "Queue is full" << endl;
            return;
        }else if( head == -1 )
        {
            head = 0;
            tail = 0;
            q[tail] = element;
        }else if(( tail == (LIMIT - 1)) && (head != 0))
        {
            tail = 0;
            q[tail] = element;
        }else
        {
            tail++;
            q[tail] = element;
        }
    }

    int get()
    {
        if(head == -1)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }

        int element = q[head];
       if(head == tail)
       {
            head = -1;
            tail = -1;
       }else if(head == (LIMIT - 1))
       {
            head = 0;
       }else
       {
            head++;
       }
    return element;
    }


};

int main()
{
    Queue q1;
    q1.put(1);
    q1.put(2);
    q1.put(3);
    cout << q1.get() << endl;
    cout << q1.get() << endl;
    q1.put(4);
    q1.put(5);
    cout << q1.get() << endl;
    cout << q1.get() << endl;
    return 0;
}
