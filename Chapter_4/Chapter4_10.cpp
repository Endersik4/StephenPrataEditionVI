// Rozdzial_4_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
double srednia;
int main()
{
    int ile;
    
    std::cout << "Ile masz wynikow ze sprintu na 100m (max 10): ";
    std::cin >> ile;
    std::array<double, 10> wyniki;
    std::cout << "Podaj wyniki sprintu na 100m a wylicze srednia: ";
    for (int i = 0; i != ile; i++)
    {
        std::cin >> wyniki[i];
        srednia += wyniki[i];
    }
    srednia /= ile;
    std::cout << "Wyniki ktore podales:";
    for (int i = 0; i != ile; i++) { std::cout << wyniki[i] << ", "; }
    std::cout << "\nSrednia podancyh wynikow to: " << srednia;
}


