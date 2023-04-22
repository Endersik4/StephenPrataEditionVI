// Rozdzial_6_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int StrSize = 26;

struct zpdw {
    char imie[StrSize];  //prawdziwe imie
    char stanowisko[StrSize]; //stanowisko sluzbowe
    char pseudozpdw[StrSize]; //pseudonim ZPDW
    int preferencje; //0 = imie, 1 - stanowisko, 2 - pseudonim

};

int main()
{
    zpdw lista[3];;
    char opcja;
    lista[0] = { "Krystian Kowalski", "Programista SI", "Cube", 1};
    lista[1] = { "Adam Krawczyk", "Gameplay Programmer", "Adamos", 2};
    lista[2] = { "Robert Drewnowski", "Wozny", "Trytytka", 0};
    std::cout << "Zakon Programistow DObrej WOli\n";
    std::cout << "a. lista wg imion       b. lista wg stanowisk\nc. lista wg pseudonimow      d. lista wg preferencji\nq. koniec\n";
    std::cout << "Wybierz jedna z opcji: ";
    while (std::cin >> opcja)
    {
        if (opcja == 'a')
        {
            for (int i = 0; i != 3; i++) std::cout << lista[i].imie << std::endl;
        }
        else if (opcja == 'b')
        {
            for (int i = 0; i != 3; i++) std::cout << lista[i].stanowisko << std::endl;
        }
        else if (opcja == 'c')
        {
            for (int i = 0; i != 3; i++) std::cout << lista[i].pseudozpdw << std::endl;
        }
        else if (opcja == 'd')
        {
            for (int i = 0; i != 3; i++)
            {
                switch (lista[i].preferencje)
                {
                case 0: std::cout << lista[i].imie << std::endl; break;
                case 1: std::cout << lista[i].stanowisko << std::endl; break;
                case 2: std::cout << lista[i].pseudozpdw << std::endl; break;
                default: std::cout << "Blad z preferencjami\n";
                }
            }
        }
        else if (opcja == 'q') break;
        else std::cout << "Podaj poprawna opcje.\n";

        std::cout << "Wybierz jedna z opcji: ";
    }
    std::cout << "Do zobaczenia!\n";

}