// Rozdzial_5_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
char napis[20];
int ile;

int main()
{
    std::cout << "Podawaj slowa (kiedy skonczysz, napisz 'gotowe' \n";
    while (std::cin >> napis)
    {
        if (strcmp(napis, "gotowe")) ile++;
        else break;
    }
    std::cout << "Podano " << ile << " slow";
}


