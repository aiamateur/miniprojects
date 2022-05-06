#include <iostream>
using namespace std;

struct Sterling
{
    int pounds;
    int shillings;
    int pence;
};

Sterling getSterling();
Sterling addSterling(Sterling, Sterling);
void displaySterling(Sterling);

int main()
{
    Sterling s1 = getSterling();
    Sterling s2 = getSterling();
    Sterling s3 = addSterling(s1, s2);
    displaySterling(s3);
    return 0;
}

Sterling getSterling()
{
    Sterling s;
    cout << "Enter pounds" << endl;
    cin >> s.pounds;
    cout << "Enter shillings" << endl;
    cin >> s.shillings;
    cout << "Enter pence" << endl;
    cin >> s.pence;
    return s;
}

Sterling addSterling(Sterling s1, Sterling s2)
{
    Sterling s3 = {0, 0, 0};
    s3.pence = s1.pence + s2.pence;
    if(s3.pence >= 12)
    {
        s3.pence = s3.pence - 12;
        s3.shillings = s3.shillings + 1;
    }
    s3.shillings = s3.shillings + s1.shillings + s2.shillings;
    if(s3.shillings >= 20)
    {
        s3.shillings = s3.shillings - 20;
        s3.pounds = s3.pounds + 1;
    }
    s3.pounds = s3.pounds + s1.pounds + s2.pounds;
    return s3;
}

void displaySterling(Sterling s)
{
    cout << s.pounds << "." << s.shillings << "." << s.pence << endl;
}
