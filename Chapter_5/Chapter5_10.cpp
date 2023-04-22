// Rozdzial_5_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int wiersze, kropki;
    std::cout << "Podaj liczbe wierszy: ";
    std::cin >> wiersze;
    
    for (int i = wiersze-1; i > -1; i--)
    {
        for (int j = 0; j != i; j++)
        {
            std::cout << ".";
        }
        for (int j = 0; j != wiersze-i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

