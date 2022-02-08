#include <iostream>
#include "start.cpp"
#include "vorwort.cpp"
#include "menue.h"
#include "kapitel1.cpp"
#include "funktionen.h"
#include "linux.h"

using namespace std;

string input;

int main(){
    Kapitel();
    start();
    Hauptmenue();
    while (true)
    {
     cin >> input;
     if (input == "S" || input == "s")
      {
         kapitel1();
     }
     else if (input == "asdf")
     {
        cheat();
     }
     else
            cout << "error";
     }
    
    
    

}