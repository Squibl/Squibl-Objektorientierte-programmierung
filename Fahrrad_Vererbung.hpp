// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Fahrrad.hpp"

using namespace std;

class E_Bike : public Fahrrad
{
private:
    int kapazitaet;

public:
    // Konstruktor
    E_Bike() { kapazitaet = -1; };
    E_Bike(string m, string mo, int jahr, double p, int ka) : Fahrrad(m, mo, jahr, p) { kapazitaet = ka; }

    // Get-Methode
    int getKapazitaet() const { return kapazitaet; }

    // Override nenneMarkeModell + Kapazität
    void nenneMarkeModell(void) const override
    {
        cout << "Marke: " << getMarke() << ", Modell: " << getModell() << ", Kapazitaet: " << kapazitaet << "Wh" << endl;
    }

    // Methode zu Überprüfung ob E-Bike oder MTB
    string typeCheck(void) const override
    {
        return ("E-bike");
    }
};

class MTB : public Fahrrad
{
public:
    // Konstruktor - Vererbung Fahrrad
    MTB(string m, string mo, int jahr, double p) : Fahrrad(m, mo, jahr, p) {}

    // Methode zu Überprüfung ob E-Bike oder MTB
    string typeCheck(void) const override
    {
        return ("Mtb");
    }
};
