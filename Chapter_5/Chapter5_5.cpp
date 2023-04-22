// Rozdzial_5_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string miesiace[12] = { "styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien" };
    int liczba_sztuk[12], suma = 0;
    std::cout << "Podaj miesieczna liczbe sprzedazy w sztuakch ksiazki C++\n";
    for (int i = 0; i != 12; i++)
    {
        std::cout << "Podaj za " << miesiace[i] << ": ";
        std::cin >> liczba_sztuk[i];
        suma += liczba_sztuk[i];
    }
    std::cout << "Ksiazki sprzedaly sie w " << suma << " sztukach przez rok\n";
    
}

