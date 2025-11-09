// Fahrradladen : Objektorientierte Programmierung Praktikum A4 : V1 : 29.09.2025 : Jakob Onnen/ Liam Poppinga
// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "FahrradLaden.hpp"
#include <fstream>
#include <cctype>
#define IGNORE 1000

using namespace std;

#define EXIT 1

// Funktionen deklaration
string toLowerCase(const string &str);

int main(void)
{
    // Variablen/Objekte deklaration/definition
    fstream MyFile("fahrradliste.txt");
    Fahrradladen Laden(MyFile);
    string eingabeString;
    int menüWahl;

    // While-Loop
    while (true)
    {
        menüWahl = EXIT;
        cout << "\nOption:\tWaehle einen Punkt:\n"
             << "1:Programm beenden\n2:Alles ausgeben\n3:Marke suchen\n4:Typ suchen (E-Bike/MTB)" << endl;
        cin >> menüWahl;

        
        // IOSTREAM Error reset
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(IGNORE, '\n');
            continue;
        }
        else
        { // Menüpunkte
            switch (menüWahl)
            {
            case 1: // Programm beenden
                return 0;
            case 2: // Alles ausgeben
                Laden.nenneFahrrader();
                break;
            case 3: // Suche
                cout << "Gebe die gesuchte Marke ein: " << endl;
                cin >> eingabeString;
                Laden.sucheMarke(eingabeString);
                break;
            case 4:                
                cout << "Gebe den gesuchten Typ ein (E-Bike oder MTB): " << endl;
                cin >> eingabeString;
                Laden.sucheTyp(eingabeString);
                break;
            default:
                break;
            }
        }
    }
}
