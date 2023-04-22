// Rozdzial_5_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int suma, liczba;

int main()
{
    std::cout << "Podaj liczby (0 = koniec sumowania): ";
    std::cin >> liczba;
    suma += liczba;
    while (liczba != 0)
    {
        std::cin >> liczba;
        suma += liczba;
        std::cout << "Suma poprzednich liczb: " << suma << "\n";
    }
    return 0;

}

