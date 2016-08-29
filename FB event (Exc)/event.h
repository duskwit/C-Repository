#include <iostream>

using namespace std;

class Event
{
    int day, month, year;
    int hour, minutes;
    string name;

    public:
    //konstruktor
    Event(string,int,int,int,int,int);
    ~Event(); //destruktor
    void load();
    void show();
};
