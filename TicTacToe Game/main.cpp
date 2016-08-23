#include <iostream>
#include <windows.h>
using namespace std;

//tablica kolko i krzyzyk 3x3
char matrix [3][3] = { '1','2','3','4','5','6','7','8','9' };

//podprogram narysuj
void Draw()
{   //nazwa
    cout << "TIC TAC TOE" << endl << endl;
        //ulozenie kolumn tablicy matrix 3 na 3
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout << matrix [i][j] << " ";
            }
            cout << endl;
        }
}

//podprogram- wklad uzytkownika
void Input
{
    cout << "Press the number of the field: ";
     switch (_getch())
       {
        case '1':
            matrix[0][0] = player;
            break;
        case '2':
            matrix[0][1] = player;
            break;
        case '3':
            matrix[0][2] = player;
            break;
        case '4':
            matrix[0][3] = player;
            break;
        case '5':
            matrix[0][0] = player;
            break;
        case '6':
            matrix[0][0] = player;
            break;
          case '7':
            matrix[0][0] = player;
            break;
        case '8':
            matrix[0][0] = player;
            break;
        case '9':
            matrix[0][0] = player;
            break;
}
}

int main()
{
    //wywolaj funkcje draw
    Draw();
    //windows ??
    system("pause");
    return 0;
}
