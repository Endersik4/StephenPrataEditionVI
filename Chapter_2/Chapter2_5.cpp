// Rozdzial_1_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double farh(double cel)
{
    return 1.8 * cel + 32.0;
}

int main()
{
    std::cout << "Podaj stopnie Celsjusza: \n";
    double ces;
    std::cin >> ces;
    std::cout << ces << " stopni celsjusza to " << farh(ces) << " stopnie Farhenheita\n";
}

