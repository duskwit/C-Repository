#include <iostream>

using namespace std;

class Samochod
{
    public:
    string marka;
    string model;
    int rocznik;
    int przebieg;

    void wczytaj()
    {
     cout<<"DODAWANIE NOWEGO AUTA: "<<endl;
     cout<<"Podaj marke: "; cin>>marka;
     cout<<"Podaj model: "; cin>>model;
     cout<<"Podaj rocznik: "; cin>>rocznik;
     cout<<"Podaj przebieg: "; cin>>przebieg;
     cout<<endl;
    }

    void wypisz()
    {
        cout<<"Samochod marki "<<marka<<model<<" rocznik "<<rocznik<<" o przebiegu "<<przebieg<<endl<<endl;
    }
};

int main()
{
    Samochod s1;
    Samochod s2;

    s1.wczytaj();
    s1.wypisz();

    s2.wczytaj();
    s2.wypisz();

    return 0;
}
