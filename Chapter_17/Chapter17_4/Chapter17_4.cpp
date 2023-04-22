// Rozdzial_17_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

int main()
{
    using namespace std;
    string nazwa_p1, nazwa_p2, nazwa_p3;
    cout << "Podaj pierwszy plik: (z .txt): ";
    cin >> nazwa_p1;
    ifstream plik_1(nazwa_p1);
    while (!plik_1.is_open())
    {
        cout << "Wprowadz poprawna nazwe pliku: ";
        cin >> nazwa_p1;
        ifstream plik_1(nazwa_p1);
        if (plik_1.is_open()) break;
    }

    cout << "Podaj drugi plik: (z .txt): ";
    cin >> nazwa_p2;
    ifstream plik_2(nazwa_p2);
    while (!plik_2.is_open())
    {
        cout << "Wprowadz poprawna nazwe pliku: ";
        cin >> nazwa_p2;
        ifstream plik_k2(nazwa_p2);
        if (plik_2.is_open()) break;
    }
    cout << "Podaj trzeci plik wyjsciowy do ktorego wszystko wpisze: (z .txt): ";
    cin >> nazwa_p3;
    ofstream plik_do(nazwa_p3);

    string a, b;
    while (!plik_1.eof() || !plik_2.eof())
    {
        if (!plik_1.eof())
        {
            getline(plik_1, a);
            plik_do << a;
        }
        plik_do << '\t';
        if (!plik_2.eof())
        {
            getline(plik_2, b);
            plik_do << b;
        }
        plik_do << '\n';

    }
    
}
