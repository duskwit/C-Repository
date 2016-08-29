#include <iostream>

using namespace std;

//klasy zaczynamy du¿¹ liter¹ i koñczymy ; dla rozró¿nienia od obiektu
class Zwierze
{
    public:
    //atrybuty
    string gatunek;
    string imie;
    int wiek;
    //metody (czyli funkcje wewn klasy)
    //void (do pamiêci komputera, bez zwracania)
    void dodaj_zwierze()
    {
        cout<<"DODAWANIE NOWEGO ZWIERZECIA DO BAZY: "<<endl;
        cout<<"Podaj gatunek: ";
        cin>>gatunek;
        cout<<"Podaj imie: ";
        cin>>imie;
        cout<<"Podaj wiek: ";
        cin>>wiek;
    }
    void daj_glos()
    {
        if(gatunek=="kot") cout<<imie<<" lat "<<wiek<<": Miau!";
        else if(gatunek=="koza") cout<<imie<<" lat "<<wiek<<": Bee!";
        else if(gatunek=="krowa") cout<<imie<<" lat "<<wiek<<": Muu!";
        else cout<<"nie ma";
    }
};


int main()
{
    //obiekt, obiekt to z1, Zwierze to przepis
    Zwierze z1;
    z1.dodaj_zwierze();
    z1.daj_glos();
    Zwierze z2;

    return 0;
}
