// Rozdzial_1_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double jedno(double lata)
{
    return lata * 63240;
}

int main()
{
    std::cout << "Podaj lata swietlne: \n";
    double lata;
    std::cin >> lata;
    std::cout << lata << " lat swietlnych = " << jedno(lata) << " jednostek astronomicznych\n";
}

