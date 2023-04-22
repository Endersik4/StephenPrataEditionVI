// Rozdzial_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int ile = 0;
    char znak;
    std::cout << "Podawaj znaki ($ - konczy dzialanie):\n";
    while (std::cin >> znak)
    {
        if (znak == '$') break;
        else ile++;
    }
    std::cout << "Podales " << ile << " znakow.\n";
}

