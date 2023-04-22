// Rozdzial_2_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Podaj sekundy \n";
    long sek;
    std::cin >> sek;
    long sek1 = sek;
    const int dni = ((sek / 60) / 60) / 24;
    sek -= (((dni * 24) * 60) * 60);
    const int h = ((sek / 60) / 60);
    sek -= ((h * 60) * 60);
    const int min = (sek / 60);
    sek -= (min * 60);
    std::cout << sek1 << " sekund = " << dni << " dni, " << h << " godzin, " << min << " minut, " << sek << " sekund\n";
}
