#include <iostream>
#include "pytanie.h" //wczytanie pliku pytanie.h juz bez pytanie.cpp
using namespace std;

int main() //w mainie tlyko zarzadznie
{
    Pytanie p[3]; //4 bo zaczynamy od 0, TABLICA
    int suma=0;
    for(int i=0; i<=2; i++)
   {
    p[i].nr_pytania=i+1; //nr pytania i
    p[i].wczytaj();  //wczytaj tresc z pliku cpp2
    p[i].zadaj(); //zadaj to pytanie
    p[i].sprawdz(); //sprawdz poprawnosc
    suma+=p[i].punkt;
   }
    cout<<"KONIEC, PUNKTY= "<<suma;

    return 0;
}
