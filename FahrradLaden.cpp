#include "FahrradLaden.hpp"
// Klass Fahrradladen
Fahrradladen::Fahrradladen(fstream &file)
{

    string marke;
    string modell;
    int modellJahr;
    double preis;
    string fahrradTyp;
    int kapazitaet;

    while ((file >> marke >> modell >> modellJahr >> preis >> fahrradTyp))
    {

        if (fahrradTyp == "E-Bike")
        {
            file >> kapazitaet;
            fahrradVector.push_back(new E_Bike(marke, modell, modellJahr, preis, kapazitaet));
        }
        else if (fahrradTyp == "MTB")
        {
            fahrradVector.push_back(new MTB(marke, modell, modellJahr, preis));
        }
        // Rest der Zeile überspringen
        file.ignore(IGNORE, '\n');
    }
}
// Methode zur Ausgabe aller Fahrräder
void Fahrradladen::nenneFahrrader() const
{
    cout << left << setw(12) <<"Marke" << setw(12) <<"Modell" << setw(12) <<"Modelljahr" << setw(8) <<"Preis" << setw(10) << "Kapazitaet" << endl;
    for (size_t i = 0; i < fahrradVector.size(); i++)
    {
        fahrradVector.at(i)->ausgeben();
    }
    cout << "Im Fahrradladen sind " << fahrradVector.size() << " Fahrrader vorhanden." << endl;
}
// Methode zur Ausgabe bestimmer Fahrradmarke
void Fahrradladen::sucheAusgeben()
{
    cout << left << setw(12) <<"Marke" << setw(12) <<"Modell" << setw(12) <<"Modelljahr" << setw(8) <<"Preis" << setw(10) << "Kapazitaet" << endl;
    // Ausgabe suchVector
    for (size_t i = 0; i < suchVector.size(); i++)
    {
        suchVector.at(i)->ausgeben();
    }
}

// Methoed zur Ausgabe bestimmten Fahrradtyps
void Fahrradladen::sucheTyp(string typ)
{

    typ = toLowerCase(typ);
    suchVector.clear();
    if (typ == "E-bike" || typ == "Mtb")
        
    {
        for (Fahrrad* fp : fahrradVector)
        {
            
            if (typ == "E-bike" && typeid(*fp) == typeid(E_Bike))
            {
                suchVector.push_back(fp);
            }
            else if (typ == "Mtb" && typeid(*fp) == typeid(MTB))
            {
                suchVector.push_back(fp);
            }
        }
    }
    sucheAusgeben();
}
// Methode zur Suche einer bestimmten Marke
void Fahrradladen::sucheMarke(string Marke)
{
    Marke = toLowerCase(Marke);
    suchVector.clear();
    // Vergleicht jedes fahrrad Objekt im Container mit Marke
    for (size_t i = 0; i < fahrradVector.size(); i++)
    {
        if (fahrradVector.at(i)->getMarke() == Marke)
        {
            suchVector.push_back(fahrradVector.at(i));
        }
    }
    sucheAusgeben();
}


string Fahrradladen::toLowerCase(const string &str)
{
    string lowerStr = str;

    for (char &c : lowerStr)
    {
        c = (char)tolower(c);
    }
    lowerStr[0] = (char)toupper(lowerStr[0]);
    return lowerStr;
}

//Fahrrad* Fahrradladen::cloneFahrrad(Fahrrad* fp) {return fp->clone();}

Fahrradladen::~Fahrradladen()
{
    suchVector.clear();
    // Löschen aller dynamischen Variablen
    for (Fahrrad *f : fahrradVector)
    {
        delete f;
    }
}