#include <iostream>

using namespace std;

class Pytanie
{
    public:

    string tresc;
    string a, b, c;
    int nr_pytania;
    string poprawna;
    string odpowiedz;
    int punkt; //w klasach nie nadaje sie wartosci

    //procedury
    void wczytaj(); //zeby wczytac klase Pytanie do pytanie cpp
    void zadaj();  //zeby zadac pytanie
    void sprawdz();  //czy poprawna odp
};
