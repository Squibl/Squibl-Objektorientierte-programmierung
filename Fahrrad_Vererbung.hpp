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
    // Deklarationen
    E_Bike();
    E_Bike(string m, string mo, int jahr, double p, int ka);

    int getKapazitaet() const { return kapazitaet; }
};
// Konstruktor
E_Bike::E_Bike()
{
    kapazitaet = -1;
}
E_Bike::E_Bike(string m, string mo, int jahr, double p, int ka) : Fahrrad(m, mo, jahr, p)
{
    kapazitaet = ka;
}

class MTB : public Fahrrad
{
private:
    /* data */
public:
    MTB(string m, string mo, int jahr, double p) : Fahrrad(m, mo, jahr, p) {}
};
