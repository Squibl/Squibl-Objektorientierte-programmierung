#include "MTB.hpp"

MTB::MTB(string m, string mo, int jahr, double p) : Fahrrad(m, mo, jahr, p) {}

void MTB::ausgeben(){
    map<string, string> info;
    info = getProperties();
    info["Preis"].resize(6);

    cout << left << setw(12) <<  info["Marke"];
    cout << left << setw(12) <<  info["Modell"];
    cout << left << setw(12) <<  info["Modelljahr"];
    cout << left << setw(8)  <<  info["Preis"] << endl;;    
}

// Map der einzelnen Properties
map<string, string> MTB::getProperties() const
{
    return {{"Marke", getMarke()}, {"Modell", getModell()}, {"Modelljahr", to_string(getModellJahr())}, {"Preis", to_string(getPreis())}};
};
