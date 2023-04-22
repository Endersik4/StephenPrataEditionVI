// Rozdzial_11_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stonewt.h"

int main()
{
    using namespace std;
    Stonewt tab[6] = {(275), (160, 4), (13, 55)};
    cout << "Wpisz ile waza pozostale 3 elementy: "<<endl;
    for (int i = 3; i != 6; i++)
    {
        double p;
        cin >> p;
        tab[i] = { p };
    }
    int ile_k = 0, index_min = 0, index_max = 0;
    Stonewt kam_jeden = { 11, 0 };

    for (int i = 0; i != 6; i++)
    {
        if (i != 0)
        {
            if (tab[index_min] > tab[i]) index_min = i;
            if (tab[index_max] < tab[i]) index_max = i;
        }
        if (tab[i] >= kam_jeden) ile_k++;
    }
    for (int i = 0; i != 6; i++)
    {
        tab[i].show();
    }
    cout << "\n";
    cout << "Element z najmniejsza waga znajduje sie na indeksie [" << index_min << "]\n";
    cout << "Element z najwieksza waga znajduje sie na indeksie [" << index_max << "]\n";
    cout << "Jest "<<ile_k<<" elementow ktore sa wieksze lub rowne od 11 kamieni\n";
    return 0;
}
