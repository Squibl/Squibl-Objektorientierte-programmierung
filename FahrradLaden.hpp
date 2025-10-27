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

    // Mehtode Deklaration
    string toLowerCase(const string &str);

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
    void nenneFahrrader() const
    {
        for (size_t i = 0; i < fahrradVector.size(); i++)
        {
            fahrradVector.at(i).nenneMarkeModell();
        }
        cout << "Im Fahrradladen sind " << fahrradVector.size() << " Fahrrader vorhanden." << endl;
    }
    // Methode zur Ausgabe bestimmer Fahrradmarke
    void nenneFahrrader(string markeSuche)
    {
        markeSuche = toLowerCase(markeSuche);
        sucheMarke(markeSuche);
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

string Fahrradladen::toLowerCase(const string &str)
{
    string lowerStr = str;

    for (char &c : lowerStr)
    {
        c = (char)tolower(c);
    }
    lowerStr[0] = (char)toupper(lowerStr[0]);
    return lowerStr;
}