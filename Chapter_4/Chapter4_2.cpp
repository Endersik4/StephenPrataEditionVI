// Rozdzial_4_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    string dessert;

    cout << "Podaj swoje imie: \n";
    getline(cin, name);
    cout << "Podaj swoj ulubiony deser:\n";
    getline(cin, dessert);
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0;
}

