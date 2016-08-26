#include <iostream>

using namespace std;
float oceny[6];
float suma=0, srednia;
int main()
{
    for(int i=0; i<6; i++)
    {
    cout << "Podaj "<<i+1<<" ocene: ";
    cin >> oceny[i];
    suma=suma+oceny[i];
    }
    srednia=suma/6;
    cout << "srednia to: " << srednia << endl;
    return 0;
}
