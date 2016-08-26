#include <iostream>
#include <windows.h>
#include<cstdlib>

using namespace std;

int main()
{
    for(int i=5; i>=0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i << endl;
    }
    cout << "Asia jest gupia jak maslo" << endl;
    return 0;
}
