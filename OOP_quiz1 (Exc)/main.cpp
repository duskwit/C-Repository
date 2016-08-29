#include <iostream>
#include "pytanie.h"
using namespace std;

int main()
{
    Pytanie p[3];
    int suma=0;
    for(int i=0; i<=2; i++)
    {
        p[i].nr_pytania=i+1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        suma+=p[i].punkt;
    }

    cout<<endl<<"Koniec quizu! Punkty: "<<suma;
    return 0;
}
