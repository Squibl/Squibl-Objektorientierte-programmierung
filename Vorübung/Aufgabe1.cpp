//Aufgabe1 : Objektorientierte Programmierung Praktikum Gruppe A4 : V0 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

//Include Anweisungen
#include <iostream>

void aufgabe1(){

    int array[10]; //Array mit 10 Elementen

    for(int i = 0; i < 10; i++){ //Schleife die 10 mal durchläuft
        array[i] = i+1;             //Array wird mit den Werten 0, 1, 2 , ..., 10 gefüllt
    }
    for(int i = 0; i < 10; i++){ //Schleife die 10 mal durchläuft
        std::cout << array[i] << std::endl; //Die Werte des Arrays werden ausgegeben
    }
}
