// Aufgabe4 : Objektorientierte Programmierung Praktikum Gruppe A4 : V0 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

// https://www.w3schools.com/cpp/ref_fstream_fstream.asp  -- Nochmal genau anschauen

// Include Anweisungen
#include <fstream>
#include <string>
#include <iostream>

void aufgabe4()
{
    // Öffnung
    std::fstream MyFile("voruebung.txt");
    std::string word;
    int wordCount = 0;
    // Anzahl von Wörtern
    while (MyFile >> word) // Find ich komisch: MyFile übergibt über den Eingabestream an word. Word versteht \0 als ende eines Strings: Wie weiß word jedoch ob es am Ende der Datei ist?
    {
        wordCount++;
    }
    std::cout << "\nNumber of Brands :" << wordCount << "\n";

    // Ausgabe
    MyFile.clear();  // Problem: Nach dem Zählen der Wörter ist Dateizeiger am Ende der Datei.
    MyFile.seekg(0); // Zeigen an den Anfang setzen

    while (MyFile >> word){
     // C++ ist hexenwerk: Myfile ist in der Lage einständig seinen Zeiger umzusetzen
        std::cout << word << std::endl;
    }

    MyFile.close();
    return;
}