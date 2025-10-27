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

#define EXIT 1

// Funktionen deklaration
string toLowerCase(const string &str);

int main(void)
{
    // Variablen/Objekte deklaration/definition
    fstream MyFile("fahrradliste.txt");
    Fahrradladen joghurt(MyFile);
    string markeSuche;
    int menüWahl;

    // While-Loop
    while (true)
    {
        menüWahl = EXIT;
        cout << "Option:\tWaehle einen Punkt:\n"
             << "1:Programm beenden\n2:Alles ausgeben\n3:Suche" << endl;
        cin >> menüWahl;

        // IOSTREAM Error reset
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            continue;
        }
        else
        { // Menüpunkte
            switch (menüWahl)
            {
            case 1: // Programm beenden
                return 0;
            case 2: // Alles ausgeben
                joghurt.nenneFahrrader();
                break;
            case 3: // Suche
                cin >> markeSuche;
                joghurt.nenneFahrrader(markeSuche);
                break;
            default:
                break;
            }
        }
    }
}
