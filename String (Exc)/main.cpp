#include <iostream>
#include <windows.h>

using namespace std;

string imie;
string nazwisko;

int main()
{
    cout << "Podaj swoje imie: " << endl;
    cin >> imie;
    system("cls");
    cout << "Podaj swoje nazwisko: " << endl;
    cin >> nazwisko;
    system("cls");
    cout << imie << " " << nazwisko;


    return 0;
}
