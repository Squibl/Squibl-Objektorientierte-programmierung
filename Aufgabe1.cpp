//Aufgabe1 : Objektorientierte Programmierung Praktikum Gruppe A4 : V0 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

#include <stdio.h>

int array[10]; //Array mit 10 Elementen

void aufgabe1(){
    for(int i = 0; i < 10; i++){ //Schleife die 10 mal durchläuft
        array[i] = i++; //Array wird mit den Werten 0, 1, 2 , ..., 10 gefüllt
    }
    for(int i = 0; i < 10; i++){ //Schleife die 10 mal durchläuft
        printf("%d\n", array[i]); //Die Werte des Arrays werden ausgegeben
    }
}