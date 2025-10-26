// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include "Fahrrad.hpp"
#include <fstream>

using namespace std;

class Fahrradladen
{
private:
    vector<Fahrrad> FahrradVector;
    vector<Fahrrad> suchVector;
  
public:
    // Default Konstruktor
    Fahrradladen(){}
    // Konstruktor txt-Input
    Fahrradladen(fstream &file) {

        string marke, modell;
        int modellJahr;
        double preis;

        while (true) {
            if (!(file >> marke >> modell >> modellJahr >> preis))
                break; // Ende der Datei oder fehlerhafte Zeile

            FahrradVector.push_back(Fahrrad(marke, modell, modellJahr, preis));
            // Rest der Zeile überspringen
            
            file.ignore(1000, '\n');
        }

    }

    // Methode zur Ausgabe aller Fahrräder
    void nenneFahrrader(void) const
    {
        for (size_t i = 0; i < FahrradVector.size(); i++)
        {
            FahrradVector.at(i).nenneMarkeModell();
        }
        cout << "Im Fahrradladen sind " << FahrradVector.size() << " Fahrrader vorhanden." << endl;
    }

    void sucheMarke(string Marke) {
        for (size_t i = 0; i < FahrradVector.size(); i++) {
            if (FahrradVector.at(i).getMarke() == Marke) {
                suchVector.push_back(FahrradVector.at(i));
            }
        }
    }

};
