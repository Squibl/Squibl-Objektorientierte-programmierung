// Include Anweisungen
#include "Fahrrad.hpp"

// Def,ault Konstruktor
Fahrrad::Fahrrad()
{
    modellJahr = -1;
    preis = -1;
}
// Konstruktor zur Initialisierung aller Werte
Fahrrad::Fahrrad(string m) : Fahrrad() { marke = m; }
Fahrrad::Fahrrad(string m, string mo) : Fahrrad(m) { modell = mo; }
Fahrrad::Fahrrad(string m, string mo, int jahr) : Fahrrad(m, mo) { modellJahr = jahr; }
Fahrrad::Fahrrad(string m, string mo, int jahr, double p) : Fahrrad(m, mo, jahr) { preis = p; originalPreis = p;}

// Get-Methoden
string Fahrrad::getMarke() const { return marke; }
string Fahrrad::getModell() const { return modell; }
int Fahrrad::getModellJahr() const { return modellJahr; }
double Fahrrad::getPreis() const { return preis; }

// Methode zur Ausgabe von Marke und Modell
void Fahrrad::nenneMarkeModell(void) const
{
    cout << "Marke: " << getMarke() << ", Modell: " << getModell() << endl;
}

map <string, string> Fahrrad::getProperties() const{
    return {{"Marke",getMarke()},{"Modell", getModell()},{"Modelljahr", to_string(modellJahr) },{"Preis", to_string(preis)}};
};

//Fahrrad* Fahrrad::clone() const {return new Fahrrad(*this);}

void Fahrrad::setPreis(double neuerPreis){
    if (neuerPreis != -1){

        preis = preis * (neuerPreis/100);
    }
    else{
        preis = originalPreis;
    }
}

