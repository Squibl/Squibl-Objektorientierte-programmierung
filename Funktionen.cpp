// Include Anweisungen
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include "FahrradLaden.hpp"
#include <fstream>
#include <cctype>

//Funktionen

//Klein-Großschreibung Funktion
string toLowerCase(const string &str) {
    string lowerStr = str;
    
    for (char &c : lowerStr) {
        c = (char)tolower(c);
    }
    lowerStr[0] = (char)toupper(lowerStr[0]);
    return lowerStr;
}