// Fahrradladen : Objektorientierte Programmierung Praktikum A4 : V1 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include "FahrradLaden.hpp"
#include <fstream>

using namespace std;

int main(void)
{
    // Fahrrad Vektor
    vector<Fahrrad> Fahrrad_Vektor;
    // 3 Fahrrad Objekte im Vektor
    for (size_t i = 0; i < 3; i++)
    {
        Fahrrad_Vektor.push_back(Fahrrad());
    }
    // Ausgabe Inhalt Objekte
    for (size_t i = 0; i < Fahrrad_Vektor.size(); i++)
    {
        Fahrrad_Vektor.at(i).nenneMarkeModell();
    }

        return 0;
}