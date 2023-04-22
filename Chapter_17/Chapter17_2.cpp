// Rozdzial_17_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << "Podaj nazwe pliku z rozszerzeniem .txt: ";
    std::string nazwa;
    std::cin >> nazwa;
    std::ofstream plik(nazwa);
    if (!plik.is_open())
    {
        std::cout << "NIe mozna otworzyc pliku.\n";
        return 0;
    }
    char znaki;
    std::cout << "Podawaj rozne znaki: \n";
    while (std::cin.get(znaki)) {
        plik << znaki;
    }
    plik.close();
}

