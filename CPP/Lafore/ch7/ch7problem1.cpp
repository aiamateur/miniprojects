#include <iostream>
#include <cstring>
using namespace std;

void reversit(char arr[]);

int main()
{
    /*const int MAX = 80;
    char str1[] = "Oh my God";
    char str2[MAX];
    cout << strlen(str1) << endl;
    cin >> str2;
    cout << strlen(str2) << endl;
    for(int i = 0; i < strlen(str2); i++)
    {
        cout << str2[i] << endl;
    }
    cout << "The final character is " << str2[strlen(str2)] << endl;

    return 0;*/
    const int MAX = 100;
    char str1[] = "Even";
    char str2[] = "Odd";
    char str3[MAX];
    cout << "Enter a string" << endl;
    cin.get(str3, MAX, '$');
     //char str3[] = "Able was I ere I saw Elba";
    reversit(str1);
    reversit(str2);
    reversit(str3);
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

}

void reversit(char str[])
{
    int strLength = strlen(str);
    int lastIndex = strLength - 1;
    int reverseTill = ((strLength % 2) == 0) ? ((strLength - 2)/2) : ((strLength - 3)/2);
    char temp;
    for(int i = 0; i <= reverseTill; i++)
    {
        temp = str[i];
        str[i] = str[lastIndex - i];
        str[lastIndex - i] = temp;
    }
}
