#include <iostream> //szukaj w bibliotekach code blocksa
#include "pytanie.h" //cudzyslow-szukaj w folderze projektu
#include <fstream> //¿eby wczytaæ text
#include <cstdlib> //¿eby u¿yæ exit

using namespace std;

void Pytanie::wczytaj() //klasa wczytywana funkcja przez operator zasiegu
{
    fstream plik;  //pude³ko o nazwie plik dla textu quiz
    plik.open("quiz.txt", ios::in); //zmienna plik w funkcji open(sciezka do pliku i strumien wczytujacy dane)
    if(plik.good()==false)
    {
        cout<<"Nie ma pliku";
        exit(0);
    }
    //jeœli zmienna plik jest ok a to sie rowna fa³sz to:
    //nowe zmienne:
    int nr_linii=(nr_pytania-1)*5+1; //nr linii tam gdzie sa pytania
    int aktualny_nr=1; //aktualny nr pytania czyli pierwszy
    string linia; //zmienna z linia czyli pytanie w niej zawartym

    while(getline(plik,linia)) //petla while z funkcja getline- z pliku wez linie dopoki sie nie skoncza
    {
        if(aktualny_nr==nr_linii) tresc=linia;
        if(aktualny_nr==nr_linii+1) a=linia;
        if(aktualny_nr==nr_linii+2) b=linia;
        if(aktualny_nr==nr_linii+3) c=linia;
        if(aktualny_nr==nr_linii+4) poprawna=linia; //nie kumam

            aktualny_nr++;
    }
    plik.close();
}
void Pytanie::zadaj()
{
    cout<<endl<<tresc<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"________________________________"<<endl;
    cout<<endl<<"Odpowiedz: ";
    cin>>odpowiedz;
}
void Pytanie::sprawdz()
{
    if(odpowiedz==poprawna)
    {
        punkt=1;
    }
    else punkt=0;
}
