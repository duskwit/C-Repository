#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int waga;
float ocena;
float nowa_ocena=0;
float srednia;
float ocena_waga=0;
int sumawag=waga;
char wybor;

int main()
{   while(true){

    cout<<"Podaj ocene: "; cin>>ocena;
    cout<<"Podaj wage: "; cin>>waga;

    sumawag=sumawag+waga;
    ocena_waga=waga*ocena+ocena_waga;
    //cout << ocena_waga <<endl;
    //cout << sumawag <<endl;

    cout << "Wcisnij 's' aby policzyc srednia lub ENTER aby kontynuowac..."<<endl;
    wybor=getch();
    system("cls");

    if(wybor=='s'){srednia=ocena_waga/sumawag;
    cout << "Twoja srednia to: " << srednia <<endl;
    exit(0);}

    }
    return 0;
}

