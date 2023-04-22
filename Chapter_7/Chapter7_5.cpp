// Rozdzial_7_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int silnia(int a);

int main()
{
    int liczba;
    std::cout << "Podaj silnie do obliczenia: ";
    while (std::cin >> liczba)
    {
        std::cout << "Silnia liczby " << liczba << " rowna sie " << silnia(liczba) << std::endl;
        std::cout << "Podaj silnie do obliczenia: ";
    }
}

int silnia(int n)
{
    if (n > 0) n = n * silnia(n - 1); //3! = 1 * 2 * 3 | 2! = 1 * 2 | 5! = 1 * 2 * 3 * 4 * 5
    else n = 1;
    return n;
}
