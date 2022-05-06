#include <iostream>
using namespace std;

int main()
{
    enum etype {laborer, secretary, manager, accountant, executive, researcher};
    etype empType;
    char empTypeFirst;
    string empTypeStr;
    cout << "Enter employee type (first letter only)" << endl;
    cout << "laborer, secretary, manager, accountant, executive, researcher" << endl;
    cin >> empTypeFirst;
    switch(empTypeFirst)
    {
        case 'l':
            empType = laborer;
            break;
        case 's':
            empType = secretary;
            break;
        case 'm':
            empType = manager;
            break;
        case 'a':
            empType = accountant;
            break;
        case 'e':
            empType = executive;
            break;
        case 'r':
            empType = researcher;
            break;
    }
    switch(empType)
    {
        case laborer:
            empTypeStr = "laborer";
            break;
        case secretary:
            empTypeStr = "secretary";
            break;
        case manager:
            empTypeStr = "manager";
            break;
        case accountant:
            empTypeStr = "accountant";
            break;
        case executive:
            empTypeStr = "executive";
            break;
        case researcher:
            empTypeStr = "researcher";
            break;
    }
    cout << "Employee Type is " << empTypeStr << endl;
    return 0;
}
