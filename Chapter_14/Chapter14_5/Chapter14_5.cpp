// Rozdzial_14_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "emp.h"

int main(void)
{
    employee em("Tadeusz", "Hubert", "Sprzedawca");
    cout << em << endl;
    em.ShowAll();
    cout << endl;

    manager ma("Amforiusz", "Smoczewski", "Malarz", 5);
    cout << ma << endl;
    ma.ShowAll();
    cout << endl;

    fink fi("Maurycy", "Olkulski", "Hydraulik", "Julian Bar");
    cout << fi << endl;
    fi.ShowAll();
    cout << endl;

    highfink hf(ma, "Jan kudlaty");
    hf.ShowAll();
    cout << endl;

    cout << "Wciosnij dowolny przycisk, aby przejsc do nastepengo etapy:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();
    cout << "Uzywa wskaznika abstr_emp *:\n";
    abstr_emp* tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++) tri[i]->ShowAll();

    cout << "Uzywa tablicy abstr_emp :\n";
    abstr_emp tria[4] = { em, fi, hf, hf2 };
    for (int i = 0; i < 4; i++) tria[i].ShowAll();
    return 0;
}