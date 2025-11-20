#include "E_Bike.hpp"

using namespace std;
    // Konstruktor
E_Bike::E_Bike() { kapazitaet = -1; };
E_Bike::E_Bike(string m, string mo, int jahr, double p, int ka) : Fahrrad(m, mo, jahr, p) { kapazitaet = ka; }

// Get-Methode
int E_Bike::getKapazitaet() const { return kapazitaet; }

// Override nenneMarkeModell + Kapazität
void E_Bike::nenneMarkeModell(void) const
{
    cout << "Marke: " << getMarke() << ", Modell: " << getModell() << ", Kapazitaet: " << kapazitaet << "Wh" << endl;
}

// Map der einzelnen Properties
map<string, string> E_Bike::getProperties() const
{
    return {{"Marke", getMarke()}, {"Modell", getModell()}, {"Modelljahr", to_string(getModellJahr())}, {"Preis", to_string(getPreis())}, {"Kapazitaet", to_string(kapazitaet)}};
};

void E_Bike::ausgeben(){
    map<string, string> info;
    info = getProperties();
    info["Preis"].resize(6);
    cout << left << setw(12) <<  info["Marke"];
    cout << left << setw(12) <<  info["Modell"];
    cout << left << setw(12) <<  info["Modelljahr"];
    cout << left << setw(8) <<  info["Preis"];
    cout << left << setw(10)  <<  info["Kapazitaet"] << endl;
}