//Header Guards
#ifndef FAHRRAD_HPP
#define FAHRRAD_HPP


// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>

using namespace std;

// Klass Fahrrad
class Fahrrad
{
private:
    string marke;
    string modell;
    int modellJahr;
    double preis;
    double originalPreis;

public:
    // Default Konstruktor
    Fahrrad();
    // Konstruktor zur Initialisierung aller Werte
    Fahrrad(string m);
    Fahrrad(string m, string mo);
    Fahrrad(string m, string mo, int jahr);
    Fahrrad(string m, string mo, int jahr, double p);

    // Destruktor
    virtual ~Fahrrad(){};

    // Get-Methoden
    string getMarke() const;
    string getModell() const;
    int getModellJahr() const;
    double getPreis() const;

    // Methode zur Ausgabe von Marke und Modell
    virtual void nenneMarkeModell(void) const;

    virtual map <string, string> getProperties() const;

    //virtual Fahrrad* clone() const;

    virtual void ausgeben() = 0;

    void setPreis(double neuerPreis);

};
#endif