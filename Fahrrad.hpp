// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

// Klass Fahrrad
class Fahrrad
{
private:
    string marke;
    string modell;
    int modellJahr;
    double preis;

public:
    // Default Konstruktor
    Fahrrad()
    {
        modellJahr = -1;
        preis = -1;
    }
    // Konstruktor zur Initialisierung aller Werte
    Fahrrad(string m) : Fahrrad() { marke = m; }
    Fahrrad(string m, string mo) : Fahrrad(m) { modell = mo; }
    Fahrrad(string m, string mo, int jahr) : Fahrrad(m, mo) { modellJahr = jahr; }
    Fahrrad(string m, string mo, int jahr, double p) : Fahrrad(m, mo, jahr) { preis = p; }

    // Get-Methoden
    string getMarke() const { return marke; }
    string getModell() const { return modell; }
    int getModellJahr() const { return modellJahr; }
    double getPreis() const { return preis; }

    // Methode zur Ausgabe von Marke und Modell
    virtual void nenneMarkeModell(void) const
    {
        cout << "Marke: " << getMarke() << ", Modell: " << getModell() << endl;
    }
    virtual string typeCheck(void) const{
        return("Fahrrad");
    }
};
