#include <iostream>
#include "event.h"

using namespace std;

int main()
{
    Event w1("Apokalipsa Zombie",6,8,2045,8,15);
    w1.load();
    w1.show();


    //w1.load();

    return 0;
}
