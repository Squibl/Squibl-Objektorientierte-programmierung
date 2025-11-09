// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include "Fahrrad.hpp"

using namespace std;

class E_Bike : public Fahrrad
{
private:
    int kapazitaet;

public:
    // Konstruktor
    E_Bike();
    E_Bike(string m, string mo, int jahr, double p, int ka);

    // Get-Methode
    int getKapazitaet() const;

    // Override nenneMarkeModell + Kapazität
    void nenneMarkeModell(void) const override;

    // Map der einzelnen Properties
    map<string, string> getProperties() const override;
};

