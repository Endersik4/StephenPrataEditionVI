// Rozdzial_17_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    string nazwa_p1, nazwa_p2;
    cout << "Podaj pierwszy plik z ktorego bedzie kopiowane (z .txt): ";
    cin >> nazwa_p1;
    ifstream plik_kopiowany(nazwa_p1);
    while (!plik_kopiowany.is_open())
    {
        cout << "Wprowadz poprawna nazwe pliku: ";
        cin >> nazwa_p1;
        ifstream plik_kopiowany(nazwa_p1);
        if (plik_kopiowany.is_open()) break;
    }
    cout << "Podaj drugi plik do ktorego bedzie kopiowane (z .txt): ";
    cin >> nazwa_p2;
    ofstream plik_do(nazwa_p2);
    while (!plik_do.is_open())
    {
        cout << "Wprowadz poprawna nazwe pliku: ";
        cin >> nazwa_p2;
        ofstream plik_do(nazwa_p2);
        if (plik_do.is_open()) break;
    }
    char a;
    while (!plik_kopiowany.eof())
    {
        plik_kopiowany.get(a);
        plik_do.put(a);
    }
    cout << "Gotowe\n";
    

}

