// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Fahrrad_Vererbung.hpp"

using namespace std;

#define IGNORE 1000

// Klass Fahrradladen
class Fahrradladen
{
private:
    vector<Fahrrad *> fahrradVector; // Fahrrad Container
    vector<Fahrrad *> suchVector;    // Fahrrad Container - spez.Marke

    // Mehtode Deklaration
    string toLowerCase(const string &str);

public:
    ~Fahrradladen();
    // Default Konstruktor
    Fahrradladen() {}
    // Konstruktor txt-Input
    Fahrradladen(fstream &file)
    {

        string marke;
        string modell;
        int modellJahr;
        double preis;
        string fahrradTyp;
        int kapazitaet;

        while ((file >> marke >> modell >> modellJahr >> preis >> fahrradTyp))
        {

            if (fahrradTyp == "E-Bike")
            {
                file >> kapazitaet;
                fahrradVector.push_back(new E_Bike(marke, modell, modellJahr, preis, kapazitaet));
            }
            else if (fahrradTyp == "MTB")
            {
                fahrradVector.push_back(new MTB(marke, modell, modellJahr, preis));
            }
            // Rest der Zeile überspringen
            file.ignore(IGNORE, '\n');
        }
    }

    // Methode zur Ausgabe aller Fahrräder
    void nenneFahrrader() const
    {
        for (size_t i = 0; i < fahrradVector.size(); i++)
        {
            fahrradVector.at(i)->nenneMarkeModell();
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
            suchVector.at(i)->nenneMarkeModell();
        }
    }

    void nenneFahrrader(int platzhalter, string typ)
    {
        typ = toLowerCase(typ);
        suchVector.clear();
        if(typ == "E-bike" || typ == "Mtb"){
            for (size_t i = 0; i < fahrradVector.size(); i++)
            {
                if (fahrradVector.at(i)->typeCheck() == typ)
                {
                    fahrradVector.at(i)->nenneMarkeModell();
                }
            }
        }
    }

    void sucheMarke(const string Marke)
    {

        suchVector.clear();
        // Vergleicht jedes fahrrad Objekt im Container mit Marke
        for (size_t i = 0; i < fahrradVector.size(); i++)
        {
            if (fahrradVector.at(i)->getMarke() == Marke)
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

Fahrradladen::~Fahrradladen()
{
    suchVector.clear();
    // Löschen aller dynamischen Variablen
    for (Fahrrad *f : fahrradVector)
    {
        delete f;
    }
}