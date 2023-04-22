// Rozdzial_3_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
double przej_km, ben, ile_zos;
int main()
{
    std::cout << "Podaj ile km przejechano: \n";
    std::cin >> przej_km;
    std::cout << "Podaj ile benzyny zuzyto: \n";
    std::cin >> ben;
    std::cout << "Podaj ile km zostalo: \n";
    std::cin >> ile_zos;
    double zuzycie = (100 * ben) / przej_km;
    std::cout << zuzycie;
}


