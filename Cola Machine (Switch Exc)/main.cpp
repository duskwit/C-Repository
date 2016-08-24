#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for(int i=5; i>0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i;
    }
    system("cls");

    int wybor;
    cout << ">>MACHINE<<" << endl;
    cout << "1.Coke" << endl;
    cout << "2.Sprite" << endl;
    cout << "3.Fanta" << endl;
    cout << "4.Nestea" << endl;
    cout << "5.Orange juice" << endl << endl;
    cout << "Chose your beverage!" << endl;

    cin >> wybor;

    switch(wybor)
    {
        case 1: cout << "You have chosen COKE. Here you go.";
        break;
        case 2: cout << "You have chosen SPRITE. Here you go.";
        break;
        case 3: cout << "You have chosen FANTA. Here you go.";
        break;
        case 4: cout << "You have chosen NESTEA. Here you go.";
        break;
        case 5: cout << "You have chosen ORANGE JUICE. Here you go.";
        break;
        default: cout << "Sorry, we don't have such drink. :(";
        break;
    }

    return 0;
}
