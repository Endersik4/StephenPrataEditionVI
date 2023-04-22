// Rozdzial_4_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char imie[20];
    char nazw[20];
    cout << "Podaj imie: \n";
    cin.getline(imie, 20);
    cout << "Podaj nazwisko: \n";
    cin.getline(nazw, 20);
    strcat(nazw, ", ");
    strcat(nazw, imie);
    cout <<nazw;
}


