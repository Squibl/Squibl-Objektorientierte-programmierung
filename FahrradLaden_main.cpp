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
    fstream MyFile("fahrradliste.txt");
    Fahrradladen joghurt(MyFile);
    joghurt.nenneFahrrader();
    joghurt.sucheMarke("Cube");
}   