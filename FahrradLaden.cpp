//Fahrradladen : Objektorientierte Programmierung Praktikum A4 : V1 : 29.09.2025 : Jakob Onnen/ Liam Poppinga
//https://www.w3schools.com/cpp/cpp_constructors.asp
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
        // Konstruktor zur Initialisierung aller Werte
        Fahrrad(){
        }

        //Methoden
        void nenneMarkeModell(void){
            cout << modell << endl << marke << endl;

        }
        

};

int main (void){
    
    Fahrrad Fahr;


    Fahr.nenneMarkeModell();

    return 0;
}