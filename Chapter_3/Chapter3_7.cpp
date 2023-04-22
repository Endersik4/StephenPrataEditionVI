// Rozdzial_3_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Podaj spalanie samochodu: (litry na 100km)\n";
    double spalanie;
    std::cin >> spalanie;
    spalanie /= 3.875; //Galony
    std::cout << "Mile i galony: " << 62.14 / spalanie;
}
