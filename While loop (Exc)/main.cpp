#include <iostream>

using namespace std;

int populacja=1; int godzin=0;
int main()
{
    while(populacja<=10000000)
    {
        godzin++;
        populacja=populacja*2;

        cout << "Minelo godzin: " << godzin;
        cout << "  Liczba bakterii: " <<populacja << endl;
    }

    return 0;
}
