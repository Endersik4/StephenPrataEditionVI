// Rozdzial_11_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stonewt.h"
using std::cout;

void display(Stonewt& st, int n);

int main()
{
    Stonewt incognito(275.5, 1);
    Stonewt wolfe(285.7, 0);
    Stonewt taft(11, 8.5, 2);

    cout << "Celebryta wazyl ";
    cout << incognito << endl;
    cout << "Detektyw wazyl ";
    cout << wolfe << endl;
    cout << "Prezydent wazyl ";
    cout << taft << endl;

    cout << "Dodawanie wagi Celebryty i Detektywa " << incognito + wolfe << endl;
    cout << "Odejmowanie wagi Detektywa od Prezydenta " << wolfe - taft << endl;
    cout << "Mnozenie wagi Celebryta z waga Prezydenta " << incognito * taft << endl;
    cout << "Mnozenie wagi Celebryta z 2 = " << incognito * 2 << endl;
    cout << "Mnozenie wagi Prezydemta z 6 = " << taft * 6 << endl;

    return 0;
}