// Rozdzial_17_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik_1("bolek.dat");
    ifstream plik_2("lolek.dat");

    if (plik_1.is_open() && plik_2.is_open())
    {
        list<string> lista_b, lista_l;
        string imiona;
        while (!plik_1.eof())
        {
            getline(plik_1, imiona);
            lista_b.push_back(imiona);
        }
        lista_b.sort();
        cout << "Lista przyjaciol bolka uporzadkowana alfabetycnzie: \n";
        for (list<string>::iterator i = lista_b.begin(); i != lista_b.end(); i++) { cout << *i << endl; }
        while (!plik_2.eof())
        {
            getline(plik_2, imiona);
            lista_l.push_back(imiona);
        }
        lista_l.sort();
        cout << "Lista przyjaciol lolka uporzadkowana alfabetycnzie: \n";
        for (list<string>::iterator i = lista_l.begin(); i != lista_l.end(); i++) { cout << *i << endl; }

        list<string>ogolna_lista;
        ogolna_lista.merge(lista_l);
        ogolna_lista.merge(lista_b);
        ogolna_lista.sort();
        ogolna_lista.unique();
        ofstream odczyt("bolilol.dat");
        for (list<string>::iterator i = ogolna_lista.begin(); i != ogolna_lista.end(); i++)
        {
            odczyt << *i;
            odczyt << '\n';
        }
        cout << "\nGotowe\n";
    }
    else cout << "Blad z otwarciem pliku\n";
}
