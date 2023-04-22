// Rozdzial_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "golf.h"

int main()
{
    /*
    golf ann, andy;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    setgolf(andy);
    showgolf(andy);*/

    golf g[10];
    int ile = 0;

    std::cout << "Wprowadzaj dane graczy gofla. Brak nazwiska kończy wpisywanie nowych graczy.\n";
    for (int i = 0; i != 10; i++)
    {
        if (i > 0) std::cin.get();
        setgolf(g[i]);
        if (g[i].fullname[0] == NULL) break;
        else ile++;
    }
    std::cout << "\nDane graczy golfa ktore wprowadziles.\n";
    for(int i = 0; i != ile; i++)
    {
        std::cout << "Gracz #" << i+1 << std::endl;
        showgolf(g[i]);
    }
}


