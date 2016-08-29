#include <iostream>
#include <fstream> // biblioteka do plikow "file stream"
#include <cstdlib> // dla exit

using namespace std;

string imie, nazwisko;
int nr_tel;
fstream plik; //zmienna do plików- fstream
string linia;
int nr_linii=1; //do liczenia ktora linia zostala juz sciagnieta, zaczynamy od 1

int main()
{
    //cout << "Podaje imie: "; cin>>imie;
    //cout << "Podaje nazwisko: "; cin>>nazwisko;
    //cout << "Podaje nr_tel: "; cin>>nr_tel;

    plik.open("wizytowka.txt", ios::in | ios::app); //funkcja otworz plik(który, out czyli zapisz z programu a nie wczytaj z pliku-wtedy in) //ios::app - to append czyli dolacz nowe dane do ostatnich a nie zastpeuj plik;
    if(plik.good()==false) //spr czy plik istnieje
    {
        cout<<"nie istnieje"<<endl;
        exit(0);
    }

    while(getline(plik, linia))  //petla while zeby sciagalo linie dopoki istnieja
    {
        switch(nr_linii) //switch zaleznie ktora to linia to co czytac
        {
            case 1: imie = linia; break;
            case 2: nazwisko = linia; break;
            case 3: nr_tel = atoi(linia.c_str()); break; //funkcja atoi do przekonwetowania int liczby na string napis
        }
        nr_linii++;
    }


    //plik << imie << endl; //analogicznie jak cout << ... << endl; cout to na ekran, plik to do pliku;
    //plik << nazwisko << endl;
    //plik << nr_tel << endl;

    plik.close(); //funkcja zamknij plik po wszytskim + plik.clear() jesli tylko jedna zmienna

    cout<<"Imie: "<<imie<<endl; //tym razem dla odczytu tego co zostalo wczytane
    cout<<"Nazwisko: "<<nazwisko<<endl;
    cout<<"Numer: "<<nr_tel<<endl;

    return 0;
}
