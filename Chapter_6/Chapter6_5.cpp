// Rozdzial_6_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    long int dochod;
    double podatek;
    std::cout << "Podaj swoj dochod w twarpach a wylicze podatek: ";
    while (std::cin >> dochod)
    {
        if (dochod > 35000)
        {
            podatek = 4000 + ((dochod - 35000) * 0.2);
        }
        else if (dochod > 15000)
        {
            podatek = 1000 + ((dochod - 15000) * 0.15);
        }
        else if (dochod > 5000)
        {
            podatek = (dochod - 5000) * 0.1;
        }
        else podatek = 0;
        std::cout << "Podatek wyniosl " << podatek << " twarpow\n";
    }
    std::cout << "Koniec\n";
}
