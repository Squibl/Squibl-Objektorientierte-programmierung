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

// Funktionen deklaration
string toLowerCase(const string &str);

int main(void)
{
    // Variablen/Objekte deklaration/definition
    fstream MyFile("fahrradliste.txt");
    Fahrradladen joghurt(MyFile);
    string markeSuche;

    // While-Loop
    while (true)
    {
        cout << "Welche Marken sollen ausgegeben werden? bsp.: alle / Cube. Schreibe exit um zu beenden" << endl;
        cin >> markeSuche;
        if (markeSuche == "exit")
        {
            break;
        }
        joghurt.nenneFahrrader(toLowerCase(markeSuche));
    }
}
