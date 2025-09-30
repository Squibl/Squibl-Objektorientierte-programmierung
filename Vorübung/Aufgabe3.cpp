//Aufgabe3 : Objektorientierte Programmierung Praktikum Gruppe A4 : V0 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

//Include Anweisungen
#include <iostream>
#include <vector>

void aufgabe3(){
    std::vector<double> vect; //Vektor der Integer speichert

    for(int i = 0; i < 10; i++){ //Schleife die 10 mal durchläuft
        vect.push_back(i); //Vektor wird mit den Werten 0, 1, 2 , ..., 10 gefüllt
    }
    for(int i = 0; i < vect.size(); i++){ //Schleife wird die größe vom Vektor mal durchläuft
        std::cout << vect.at(i) << std::endl; //Die Werte des Vektors werden ausgegeben
    }
    std::cout << vect[20] << std::endl; //Was passiert hier? -> Greift auf nicht existierenden Index zu -> undefiniertes Verhalten
    std::cout << vect.size() << std::endl; //Was passiert hier? -> Wirft eine out_of_range Exception
    std::cout << vect.at(21) << std::endl;
    return;
}