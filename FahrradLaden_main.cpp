// Fahrradladen : Objektorientierte Programmierung Praktikum A4 : V1 : 29.09.2025 : Jakob Onnen/ Liam Poppinga
// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include "FahrradLaden.hpp"
#include <fstream>
#include <cctype>

using namespace std;

#define EXIT 3

// Funktionen deklaration
string toLowerCase(const string &str);

int main(void)
{
    // Variablen/Objekte deklaration/definition
    fstream MyFile("fahrradliste.txt");
    Fahrradladen joghurt(MyFile);
    string markeSuche;
    int wahl=EXIT;

    // While-Loop
    while (true)
    {
        cout << "Option:\tWaehle einen Punkt:\n" << "1:Programm beenden\n2:Alles ausgeben\n3:Suche"<< endl;
        cin >> wahl;
        switch (wahl)
        {
        case 1:     //Programm beenden     
            return 0;
        case 2:     //Alles ausgeben
            joghurt.nenneFahrrader();
            break;
        case 3:     //Suche
            cin >> markeSuche;
            joghurt.nenneFahrrader(toLowerCase(markeSuche));
            break;
        }

    }
}
