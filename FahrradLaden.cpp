//Fahrradladen : Objektorientierte Programmierung Praktikum A4 : V1 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

//Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

//Klassen- und Schnittstellenfestlegungen
class Fahrrad{
    private:
        string marke;
        string modell;
        int modellJahr;
        double preis;
    public:
        // Default Konstruktor    
        Fahrrad() {
            modellJahr=-1;
            preis=-1;
        }
        // Konstruktor zur Initialisierung aller Werte
        Fahrrad(string m) : Fahrrad(){marke=m;}
        Fahrrad(string m, string mo) : Fahrrad(){} 
        Fahrrad(string m, string mo, int jahr) : Fahrrad(m, mo){}
        Fahrrad(string m, string mo, int jahr, double p) : Fahrrad(m, mo, jahr){}


        // Get-Methoden
        string getMarke() const { return marke; }
        string getModell() const { return modell; }
        int getModellJahr() const { return modellJahr; }
        double getPreis() const { return preis; }

        // Methode zur Ausgabe von Marke und Modell
        void nenneMarkeModell(void) const {
            cout << "Marke: " << marke << ", Modell: " << modell << endl;
        }
};

int main (void){
    
    Fahrrad Auto();
    Auto.nenneMarkeModell();
    return 0;
}