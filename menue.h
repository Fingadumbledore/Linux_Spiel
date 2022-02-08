#include <iostream>

using namespace std;

int fertig = 0;

int Kapitel(){

    system ("clear");
    switch (fertig)
    {
    case 0:
        cout << "[1]Navigation\n [2]test\n [3]test\n [4]test\n ";
        break;
    case 1:
        cout << "[1]Navigation [fertig]\n [2]test\n [3]test\n [4]test\n ";
        break;
    case 2:
        cout << "[1]Navigation [fertig]\n [2]test [fertig]\n [3]test\n [4]test\n ";
        break;
    case 3:
        cout << "[1]Navigation [fertig]\n [2]test [fertig]\n [3]test [fertig]\n [4]test\n ";
        break;
    case 4:
        cout << "[1]Navigation [fertig]\n [2]test [fertig]\n [3]test [fertig]\n [4]test [fertig]\n ";
        break;
    
    default:
        break;
    }
}

int cheat()
 {
     fertig = 4;
 }

int Hauptmenue()

{
    
    cout <<"[S]tarten [B]eenden";

}

int menue(){


}