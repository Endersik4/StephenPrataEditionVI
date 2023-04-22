// Rozdzial_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Jak masz na imie? \n";
    string imie, nazwisko;
    getline(cin, imie);
    cout << "Jak sie nazywasz? \n";
    getline(cin, nazwisko);
    int ocena,wiek;
    cout << "Na jaka ocene zaslugujesz? \n";
    cin >> ocena;
    cout << "Ile masz lat? \n";
    cin >> wiek;

    cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
    cout << "Ocena: " << ocena - 1<<endl;
    cout << "WieK: " << wiek << endl;
}


