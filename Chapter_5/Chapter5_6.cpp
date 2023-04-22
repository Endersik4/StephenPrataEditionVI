// Rozdzial_5_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    const std::string miesiace[12] = { "styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien" };
    int liczba_sztuk[3][12], suma[3] = { 0,0,0 }, laczna_suma = 0;
    std::cout << "Podaj miesieczna liczbe sprzedazy w sztuakch ksiazki C++ w ciagu 3 lat\n";
    for (int i = 0; i != 3; i++)
    {
        std::cout << "=====DANE DOTYCZACE " << i+1 << " ROKU=====\n";
        for (int j = 0; j != 12; j++)
        {
            std::cout << "Podaj za " << miesiace[j] << ": ";
            std::cin >> liczba_sztuk[i][j];
            suma[i] += liczba_sztuk[i][j];
        }
        laczna_suma += suma[i];
    }
    std::cout << "Ksiazki sprzedaly sie w " << suma[0] << " sztukach w pierwszym roku\n";
    std::cout << "Ksiazki sprzedaly sie w " << suma[1] << " sztukach w drugim roku\n";
    std::cout << "Ksiazki sprzedaly sie w " << suma[2] << " sztukach w trzecim roku\n";
    std::cout << "Laczna sprzedaz ksiazek w przeciagu 3 lat wyniosla "<<laczna_suma<<"\n";

}

