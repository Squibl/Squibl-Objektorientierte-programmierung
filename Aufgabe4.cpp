//Aufgabe4 : Objektorientierte Programmierung Praktikum Gruppe A4 : V0 : 29.09.2025 : Jakob Onnen/ Liam Poppinga

// https://www.w3schools.com/cpp/ref_fstream_fstream.asp  -- Nochmal genau anschauen

//Include Anweisungen
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void aufgabe4(){
    //Öffnung
    fstream MyFile("voruebung.txt");
    //Anzahl von Wörtern
    string word;
    int wordCount =0;
    while (MyFile >> word)          //Find ich komisch: MyFile übergibt über den Eingabestream an word. Word versteht \0 als ende eines Strings: Wie weiß word jedoch ob es am Ende der Datei ist?
    {
        wordCount++;
    }
    printf("\nNumber of Letters :%i\n", wordCount);

    //Ausgabe
    MyFile.clear();                 //Problem: Nach dem Zählen der Wörter ist Dateizeiger am Ende der Datei.
    MyFile.seekg(0, ios::beg);      //Zeigen an den Anfang setzen


    while (getline(MyFile, word))   //C++ ist hexenwerk: Myfile ist in der Lage einständig seinen Zeiger umzusetzen
    {
        cout << word  << endl;
    }
    
    
    

    MyFile.close();
    return;
}
