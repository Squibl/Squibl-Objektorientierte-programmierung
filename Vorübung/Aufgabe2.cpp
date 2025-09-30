// Aufgabe2 : Objektorientierte Programmierung Praktikum Gruppe A4 : V0 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

//Include Anweisungen
#include <iostream>

void aufgabe2()
{
    const int rangeSize = 10; // Anzahl der Zeiger
    double *array[rangeSize]; // Array größe rangeSize

    // Anhängen der Werte
    for (int i = 0; i < rangeSize; i++)
    {
        array[i] = new double(i * 1.1);
    }

    // Ausgabe der Werte
    std::cout <<"Ausgabe Werte\n" << std::endl;
    for (int i = 0; i < rangeSize; i++)
    {
        std::cout << *array[i] << " : ";
    }

    //Speicher freigeben
    for (int i = 0; i < rangeSize; i++)
    {
        delete array[i];
    }
    
    return;
    
}