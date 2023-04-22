// Rozdzial_16_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reduce(long ar[], int n);

int main()
{
    
    int ile;
    cout << "Ile wartosci chcesz podac: ";
    cin >> ile;
    while (ile <= 0)
    {
        cout << "Nie moze byc wartosci mniejszej lub rownej zero.\n";
        cout << "Podaj ilosc elementow kotre chcesz podac: ";
        cin >> ile;
    }
    long *tab = new long[ile];
    for (int i = 0; i != ile; i++)
    {
        cout << "Podaj jakas wartosc: ";
        cin >> tab[i];
    }
    if (tab)
    {
        cout << "Po posortowaniu i po usunieciu powtarzajacych elementow tablica posiada " << reduce(tab, ile);
    }
    else cout << "Blad z wartosciami w tablicy\n";
}

int reduce(long ar[], int n)
{
    vector<long>ve;
    for (int i = 0; i != n; i++) ve.push_back(ar[i]);
    sort(ve.begin(), ve.begin() + n);

    for (int i = 1; i != ve.size();)
    {
        if (ve[i - 1] == ve[i]) ve.erase(ve.begin() + i);
        else i++;
    }

    for (int i = 0; i != ve.size(); i++) cout << ve[i] << endl;

    return ve.size();
}
