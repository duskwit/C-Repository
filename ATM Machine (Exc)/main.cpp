#include <iostream>

using namespace std;

string PIN;
int main()
{
    cout << "Witaj!" << endl;
    cout << "Podaj numer PIN:";
    cin >> PIN;

    if(PIN=="1309")
    {
        cout << "Poprawny PIN!";
    }
    else
    {
        cout << "Niepoprawny PIN.";
    }

    return 0;
}
