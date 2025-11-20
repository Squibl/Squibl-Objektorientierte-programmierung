// Header Guards
#ifndef MTB_HPP
#define MTB_HPP

// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include "Fahrrad.hpp"
#include <iomanip>

using namespace std;

class MTB : public Fahrrad
{
public:
    // Konstruktor - Vererbung Fahrrad
    MTB(string m, string mo, int jahr, double p);
    // Ausgeben in Tabellenform
    void ausgeben() override;

    // Map der einzelnen Properties
    map<string, string> getProperties() const override;
};
#endif