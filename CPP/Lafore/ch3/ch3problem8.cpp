#include <iostream>


using namespace std;




int main()
{
    int pounds1;
    int shillings1;
    int pence1;
    int pounds2;
    int shillings2;
    int pence2;

    char command;


    do
    {
        int pounds = 0;
        int shillings = 0;
        int pence = 0;
        cout << "Enter first amount" << endl;
        cout << "Enter pounds" << endl;
        cin >> pounds1;
        cout << "Enter shillings" << endl;
        cin >> shillings1;
        cout << "Enter pence" << endl;
        cin >> pence1;
        cout << "Enter second amount" << endl;
        cout << "Enter pounds" << endl;
        cin >> pounds2;
        cout << "Enter shillings" << endl;
        cin >> shillings2;
        cout << "Enter pence" << endl;
        cin >> pence2;


        pence = pence1 + pence2;
        if(pence > 11)
        {
            pence = (pence - 12 );
            shillings++;
        }

        shillings = shillings + shillings1 + shillings2;
        if(shillings > 19)
        {
            shillings = (shillings - 20);
            pounds++;
        }

        pounds = pounds + pounds1 + pounds2;

        cout << "Total is " << pounds << " pounds, " << shillings << " shillings, " << pence << " pence." << endl;

        cout << "Do you wish to continue(y/n)?" << endl;
        cin >> command;


    }while(command != 'n');

    return 0;
}
