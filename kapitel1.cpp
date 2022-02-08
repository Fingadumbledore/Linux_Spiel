#include <iostream>
#include "start.cpp"
#include "linux.h"

using namespace std;

int navigation()
{
    cout << "Genau wie in diesem Spile müssen wir uns auch in Linux bewegen\n";
    cout << "Dafür gibt es befehle, die wir in diesem Kapitel gelernt werden";
    cin.get();
    cout << "um zu sehen was sich gerade dort befindet wo wir sind gibt es den Befehl [ls]\n";
    cout << "Das ist Englisch und steht für list\n";
    cin.get ();
    system("clear");
    cout << "Probieren wir es aus gebe [ls] ein\n";
    cout << "$ ";
    cin >> ls;
    lsfunktion(ls);
}
int Linux1(){
    cout << "was ist Linux?";
    cout << " Bestimmt kennt ihr das Maskotchen TUX";
    cin.get();
    tux();
    cout << "Da haben wir ihn ja";
    cout << "Tux steht füt Torvalds unix\n";

}

int jocker(){


    
}

int kapitel1()

{
    cout <<"Thema: Navigation\n Dauer: 5 Min\n";
    navigation();
    cout << "Thema: Linux 1\n  Dauer: 5 Min\n";
    Linux1();


}