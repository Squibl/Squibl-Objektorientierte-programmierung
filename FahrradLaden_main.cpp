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


string toLowerCase(const string &str) {
    string lowerStr = str;
    
    for (char &c : lowerStr) {
        c = tolower(c);
    }
    lowerStr[0] = toupper(lowerStr[0]);
    return lowerStr;
}

int main(void)
{
    fstream MyFile("fahrradliste.txt");
    Fahrradladen joghurt(MyFile);

    while (true){
    string markeSuche;
    cout << "Welche Marken sollen ausgegeben werden? bsp.: alle / Cube. Schreibe exit um zu beenden" << endl;
    cin >> markeSuche;
    if (markeSuche == "exit"){
        break;
    }
    joghurt.nenneFahrrader(toLowerCase(markeSuche));
    }
}   

