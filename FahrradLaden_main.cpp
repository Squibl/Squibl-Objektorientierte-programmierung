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
#include <format>
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
    float eingabeFloat;
    int menüWahl;

    // While-Loop
    while (true)
    {
        menüWahl = EXIT;
        cout << "\nOption:\tWaehle einen Punkt:\n"
             << "1:Programm beenden\n2:Alles ausgeben\n3:Marke suchen\n4:Typ suchen (E-Bike/MTB)\n5:Liste nach Modelljahr sortieren\n6:Preis von Fahrreader einer Marke aendern" << endl;
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
                cout << "Gebe die gesuchte Marke ein: ";
                cin >> eingabeString;
                Laden.sucheMarke(eingabeString);
                break;
            case 4:                
                cout << "Gebe den gesuchten Typ ein (E-Bike oder MTB): ";
                cin >> eingabeString;
                Laden.sucheTyp(eingabeString);
                break;
            case 5:
                Laden.sortier();
                cout << "Fahrradliste wurde sortiert.\n";
                break;
            case 6:
                cout << "Gebe die gesuchte Marke ein: ";
                cin >> eingabeString;
                cout <<"Geben sie die Preisaenderung in Prozent an (geben sie -1 ein um Preise zurueckzusetzen): ";
                cin >> eingabeFloat;
                Laden.preisAnpassen(eingabeFloat, eingabeString);
            default:
                break;
            }
        }
    }
}
