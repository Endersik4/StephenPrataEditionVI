// Rozdzial_16_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

list<string> inicjacja(int n);

int main()
{
    int ile;
    cout << "Bolek, wpisz ile masz przyjaciol: ";
    cin >> ile;
    list<string>lista_bolka = inicjacja(ile);
    cout << "Lolek, wpisz ile masz przyjaciol: ";
    cin >> ile;
    list<string>lista_lolka = inicjacja(ile);

    list<string>ogolna_lista; 
    ogolna_lista.merge(lista_lolka);
    ogolna_lista.merge(lista_bolka);
    ogolna_lista.sort();
    ogolna_lista.unique();
    cout << "\nLista ogolna: \n";
    for (list<string>::iterator i = ogolna_lista.begin(); i != ogolna_lista.end(); i++)
    {
        cout << *i << endl;
    }
    
}

list<string> inicjacja(int n)
{
    list<string>lista;
    for (int i = 0; i != n; i++)
    {
        if (i == 0) cin.get();
        cout << "Podaj imie i nazwisko swojego przyjaciela: ";
        string a;
        getline(cin, a);
        lista.push_back(a);
    }
    lista.sort();
    for (list<string>::iterator i = lista.begin(); i != lista.end(); i++) { cout << *i << endl; }
    return lista;
}
