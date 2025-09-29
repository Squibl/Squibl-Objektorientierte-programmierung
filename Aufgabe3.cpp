//Aufgabe3 : Objektorientierte Programmierung Praktikum Gruppe A4 : V0 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

//Include Anweisungen
#include <stdio.h>
#include <vector>

void aufgabe3(){
    std::vector<int> array; //Vektor der Integer speichert

    for(int i = 0; i < 10; i++){ //Schleife die 10 mal durchläuft
        array.push_back(i); //Vektor wird mit den Werten 0, 1, 2 , ..., 10 gefüllt
    }
    for(int i = 0; i < array.size(); i++){ //Schleife wird die größe vom Vektor mal durchläuft
        printf("%d\n", array[i]); //Die Werte des Vektors werden ausgegeben
    }
}