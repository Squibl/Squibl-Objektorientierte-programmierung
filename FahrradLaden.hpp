// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include "Fahrrad.hpp"
#include <fstream>

using namespace std;

// Klass Fahrradladen
class Fahrradladen
{
private:
    vector<Fahrrad> fahrradVector; // Fahrrad Container
    vector<Fahrrad> suchVector;    // Fahrrad Container - spez.Marke

public:
    // Default Konstruktor
    Fahrradladen() {}
    // Konstruktor txt-Input
    Fahrradladen(fstream &file)
    {

        string marke;
        string modell;
        int modellJahr;
        double preis;

        while ((file >> marke >> modell >> modellJahr >> preis))
        {

            fahrradVector.push_back(Fahrrad(marke, modell, modellJahr, preis));

            // Rest der Zeile überspringen
            file.ignore(1000, '\n');
        }
    }

    // Methode zur Ausgabe aller Fahrräder
    void nenneFahrrader(const string markeSuche)
    {

        if (markeSuche == "Alle")
        {
            for (size_t i = 0; i < fahrradVector.size(); i++)
            {
                fahrradVector.at(i).nenneMarkeModell();
            }
            cout << "Im Fahrradladen sind " << fahrradVector.size() << " Fahrrader vorhanden." << endl;
        }
        else
        {
            sucheMarke(markeSuche);
        }
        // Ausgabe suchVector
        for (size_t i = 0; i < suchVector.size(); i++)
        {
            suchVector.at(i).nenneMarkeModell();
        }
    }

    void sucheMarke(const string Marke)
    {

        suchVector.clear();
        // Vergleicht jedes fahrrad Objekt im Container mit Marke
        for (size_t i = 0; i < fahrradVector.size(); i++)
        {
            if (fahrradVector.at(i).getMarke() == Marke)
            {
                suchVector.push_back(fahrradVector.at(i));
            }
        }
    }
};