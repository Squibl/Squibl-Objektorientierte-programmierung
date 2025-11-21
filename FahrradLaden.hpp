//Header Guards
#ifndef FahrradLaden_HPP
#define FahrradLaden_HPP

// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include "E_Bike.hpp"
#include "MTB.hpp"
#include <iomanip>

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
    Fahrradladen();
    // Konstruktor txt-Input
    Fahrradladen(fstream &file);

    // Methode zur Ausgabe aller Fahrräder
    void nenneFahrrader() const;
    // Methode zur Ausgabe bestimmer Fahrradmarke
    void sucheAusgeben();

    // Methoed zur Ausgabe bestimmten Fahrradtyps
    void sucheTyp(string typ);
    // Methode zur Suche einer bestimmten Marke
    void sucheMarke(string Marke);

    //Fahrrad* cloneFahrrad(Fahrrad* fp);


    //Sortierfunktion
    void sortier();

    //Preis verändern
    void preisAnpassen(double neuerPreis, string marke);
};
#endif